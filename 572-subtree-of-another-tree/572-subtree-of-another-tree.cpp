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
    bool ans=false;
    bool isIdentical(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)
            return true;
        if(root1==NULL || root2==NULL)
            return false;
            
        return root1->val==root2->val && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);
    }
    
    void inorder(TreeNode* root,TreeNode* subRoot)
    {
        if(root==NULL)
            return;
        inorder(root->left,subRoot);
        if(root->val==subRoot->val)
        {
            if(isIdentical(root,subRoot))
                ans=true;
        }
        inorder(root->right,subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        inorder(root,subRoot);
        return ans;
    }
};