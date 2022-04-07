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
    int cnt=1;
    int maxi=0;
    TreeNode* prev=NULL;
    void inorder(TreeNode* root,vector<TreeNode*>&v)
    {
        if(root==NULL) return;
        inorder(root->left,v);
        if(prev!=NULL)
        {
            if(root->val==prev->val)
            {
                cnt++;
            }
            else
                cnt=1;
        }
        if(cnt>maxi)
        {
            v.clear();
            maxi=cnt;
            v.push_back(root);
            
        }
        else if(cnt==maxi)
        {
            v.push_back(root);
        }
        prev=root;
        inorder(root->right,v);  
    }
    vector<int> findMode(TreeNode* root) {
        vector<TreeNode*>v;
        inorder(root,v);
        vector<int>res(v.size());
        for(int i=0;i<v.size();i++)
        {
            res[i]=v[i]->val;
        }
        return res;
    }
};