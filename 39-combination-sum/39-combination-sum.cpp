class Solution {
public:
    void solve(int i,int s,vector<int>& candidates,vector<int>& ds,vector<vector<int>>&res,int target)
    {
        if(s>target)    return;
        if(i==candidates.size())
        {
            if(target==s)
                res.push_back(ds);
            return;
        }
        s+=candidates[i];
        ds.push_back(candidates[i]);
        solve(i,s,candidates,ds,res,target);
        s-=candidates[i];
        ds.pop_back();
        solve(i+1,s,candidates,ds,res,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,0,candidates,ds,res,target);
        return res;
    }
};