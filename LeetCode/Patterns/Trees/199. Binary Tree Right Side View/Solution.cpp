/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>rightview ; 
        if(root==NULL)
        return rightview ; 
        queue<TreeNode*>qu;
        qu.push(root); 
        while(!qu.empty())
        {
            vector<int>vec ;
            int size = qu.size();
            for(int i = 0 ; i<size ;i++){
                TreeNode *ptr = qu.front();
                qu.pop();
                if(i==size-1){
                    rightview.push_back(ptr->val);
                }
                if(ptr->left!=NULL){
                    qu.push(ptr->left);
                }
                if(ptr->right!=NULL){
                    qu.push(ptr->right);
                }
            }
        }
        return rightview;
    }
};