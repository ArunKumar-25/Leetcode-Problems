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
    int diameter;
    int diameterOfBinaryTree(TreeNode* root) {
        diameter=0;
        height(root);
        return diameter;
    }
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        diameter=max(diameter,lh+rh);
        return max(lh,rh)+1;
    }
};
