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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        while(true)
        {
            while(root)
            {
                st.push(root);
                root=root->left;
            }
            if(st.empty())
                    break;
            root=st.top();
            st.pop();
            v.push_back(root->val);
            root=root->right;
            
        }
        return v;
    }
};