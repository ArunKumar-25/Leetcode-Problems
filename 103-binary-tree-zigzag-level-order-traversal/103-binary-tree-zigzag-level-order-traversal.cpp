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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        bool f=0;
        while(!q.empty())
        {
            vector<int>v;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                root=q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
                
            }
            f=!f;
            if(f)
                ans.push_back(v);
            else
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
        }
        return ans;
    }
};