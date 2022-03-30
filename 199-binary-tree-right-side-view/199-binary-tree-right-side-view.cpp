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
    vector<int>res;
    vector<int> rightSideView(TreeNode* root,int level=0) {
        if(!root)
            return res;
        if(level==res.size())
            res.push_back(root->val);
        rightSideView(root->right,level+1);
        rightSideView(root->left,level+1);
        
        return res;
        
    }
};