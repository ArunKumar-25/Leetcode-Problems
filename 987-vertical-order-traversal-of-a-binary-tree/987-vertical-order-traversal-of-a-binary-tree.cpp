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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            TreeNode* curr=p.first;
            int x=p.second.first;
            int y=p.second.second;
            mp[x][y].insert(curr->val);
            q.pop();
            if(curr->left)
                q.push({curr->left,{x-1,y+1}});
            if(curr->right)
                q.push({curr->right,{x+1,y+1}});
        }
        vector<vector<int>>ans;
        for(auto it1:mp)
        {
            vector<int>temp;
            for(auto it2:it1.second)
            {
                temp.insert(temp.end(),it2.second.begin(),it2.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};