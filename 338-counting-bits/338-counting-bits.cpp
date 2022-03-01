class Solution {
public:
    int solve(int n)
    {
        if(n==0)
            return 0;
        return (n&1)+solve(n>>1);
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(solve(i));
        }
        return ans;
        
    }
};