class Solution {
public:
    //Use DFS (Pre-order-traversal)
    void dfs(TreeNode* node, TreeNode* target, TreeNode* &res)
    {
        if(!node) return;
        
        if(node->val == target->val)
        {
            res = node;
            return;
        }
        
        dfs(node->left, target, res);
        dfs(node->right, target, res);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        TreeNode* res;
        dfs(cloned, target, res);
        return res; 
    }
};