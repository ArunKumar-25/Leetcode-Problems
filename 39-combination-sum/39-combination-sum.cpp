class Solution {
public:
    void solve(int i,vector<int>& candidates,vector<int>& ds,vector<vector<int>>&res,int target)
    {
        if(i==candidates.size())
        {
            if(target==0)
                res.push_back(ds);
            return;
        }
        if(candidates[i]<=target)
        {
            ds.push_back(candidates[i]);
            solve(i,candidates,ds,res,target-candidates[i]);
            ds.pop_back();
        }
        solve(i+1,candidates,ds,res,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,candidates,ds,res,target);
        return res;
    }
};