class Solution {
private:
    void dfs(TreeNode* root, int mx, int mn){
        if(root== NULL) return;

        if(root->val> mx) mx = root->val;
        else if(root->val < mn) mn = root->val;
        int tmp = max(abs(mx- root->val), abs(mn- root->val));
        if(tmp> ans) ans = tmp;

        dfs(root->left, mx, mn);
        dfs(root->right, mx, mn);
    }

public:
    int ans = -1;
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return ans;
    }
};