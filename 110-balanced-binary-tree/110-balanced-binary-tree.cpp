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
    bool f=true;
    bool isBalanced(TreeNode* root) {
        height(root);
        return f;
    }
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1)
            f=0;
        return max(lh,rh)+1;
    }
};