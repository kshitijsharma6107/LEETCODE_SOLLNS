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
   TreeNode* deleteNode(TreeNode* root, int wanted) {
        if(root==NULL)
                return NULL;
            if(wanted<root->val)
                root->left=deleteNode(root->left,wanted);//B
            else
            if(wanted>root->val  )
                root->right=deleteNode(root->right,wanted);//B
                else //element found
                {
                    if(root->left==NULL && root->right==NULL)    //no child
                        return NULL;
                        else if(root->left!=NULL && root->right==NULL)
                                    return root->left;
                                else if(root->left==NULL && root->right!=NULL)
                                    return root->right;
                                    else
                                    {
                                        TreeNode *prev=NULL;
                                        TreeNode *ptr=root->right;//ek kadam
                                        while(ptr->left!=NULL)//kadmo kadam left
                                        {
                                            prev=ptr;
                                            ptr=ptr->left;
                                        }
                                        root->val=ptr->val;//value copied
                                if(prev!=NULL)        
                                    if(ptr->right!=NULL)
                                            prev->left=ptr->right;
                                    else
                                            prev->left=NULL;
                                 else
                                    root->right=ptr->right;          
                                      
                                    }
                         
                }
                return root;
    }
  
};