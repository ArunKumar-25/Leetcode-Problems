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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int depth=1;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                root=q.front();
                q.pop();
                if(root->left==NULL && root->right==NULL)
                    return depth;
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            depth++;
        }
        return depth;
    }
};