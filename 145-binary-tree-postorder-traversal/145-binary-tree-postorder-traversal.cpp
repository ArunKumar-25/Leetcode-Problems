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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        TreeNode* prev=NULL;
        while(root!=NULL || !st.empty())
        {
            if(root)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                root=st.top();
                if(root->right==NULL || root->right==prev)
                {
                    v.push_back(root->val);
                    st.pop();
                    prev=root;
                    root=NULL;
                }
                else
                    root=root->right;
            }
        }
        return v;
    }
};