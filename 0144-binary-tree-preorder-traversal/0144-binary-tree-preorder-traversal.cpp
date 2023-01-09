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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)
            return {};
        stack<TreeNode*>q;
        q.push(root);
        vector<int>res;
        while(!q.empty())
        {
            TreeNode* t=q.top();
            q.pop();
            res.push_back(t->val);
            if(t->right)
                q.push(t->right);
            if(t->left)
                q.push(t->left);
        }
        return res;
    }
};