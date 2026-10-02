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
    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        int preIndex = 0;

        return solve(preorder, inorder, preIndex, 0,
                     inorder.size() - 1);
    }

    TreeNode* solve(vector<int>& preorder,
                    vector<int>& inorder,
                    int& preIndex, int left, int right) {

        if (left > right)
            return NULL;

        int rootValue = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootValue);

        int inIndex = left;

        while (inorder[inIndex] != rootValue)
            inIndex++;

        root->left = solve(preorder, inorder, preIndex,
                           left, inIndex - 1);

        root->right = solve(preorder, inorder, preIndex,
                            inIndex + 1, right);

        return root;
    }
};