class Solution {
public:
    vector<int> v;
    void sn(TreeNode* root,int n)
    {
        n=n*10+root->val;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(n);
        }
        if(root->left!=NULL)
            sn(root->left,n);
        if(root->right!=NULL)
            sn(root->right,n);

    }

    int sumNumbers(TreeNode* root) {
        
        sn(root,0);
        long long sum=0;
        for(auto it: v) sum+=it;
        return sum;

    }
};