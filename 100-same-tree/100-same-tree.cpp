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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*,TreeNode*>>st;
        st.push({p,q});
        while(!st.empty())
        {
            pair<TreeNode*,TreeNode*>curr=st.top();
            st.pop();
            p=curr.first;
            q=curr.second;
            if((p==NULL && q!=NULL) || (p!=NULL && q==NULL))
                return false;
            else if(p==NULL && q==NULL)
                continue;
            else if(p->val!=q->val)
                return false;
            else
            {
                st.push({p->left,q->left});
                st.push({p->right,q->right});
            }
        }
        return true;
    }
};