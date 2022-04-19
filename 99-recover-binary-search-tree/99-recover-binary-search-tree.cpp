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
private:
    TreeNode* first;
    TreeNode* prev;
    TreeNode* middle;
    TreeNode* last;
        
public:
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        if(root->val<prev->val)
        {
            if(first==NULL)
            {
                first=prev;
                middle=root;
            }
            else
                last=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        prev=new TreeNode(INT_MIN);
        first=last=middle=NULL;
        inorder(root);
        if(first && last)
            swap(first->val,last->val);
        else if(first && middle)
            swap(first->val,middle->val);
        
    }
};