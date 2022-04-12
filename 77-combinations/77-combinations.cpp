class Solution {
public:
    void solve(int i,int n,vector<int>&ds,vector<vector<int>>&res,int k)
    {
        if(i==n+1)
        {
            if(ds.size()==k)
                res.push_back(ds);
            return;  
        }
        ds.push_back(i);
        solve(i+1,n,ds,res,k);
        ds.pop_back();
        solve(i+1,n,ds,res,k);
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(1,n,ds,res,k);
        return res;
    }
};