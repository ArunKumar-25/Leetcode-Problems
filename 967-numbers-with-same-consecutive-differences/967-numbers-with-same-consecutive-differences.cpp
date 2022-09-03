class Solution {
public:
    vector<int> ans;
    void dfs(int n,int k,int i,int val)
    {
        if(n<=1) 
            return ans.push_back(val);
        if(i>=k)
            dfs(n-1,k,i-k,val*10+i-k);
        if(i+k<10 && k!=0)
            dfs(n-1,k,i+k,val*10+i+k);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++) 
            dfs(n,k,i,i);
        return ans;
    }
};