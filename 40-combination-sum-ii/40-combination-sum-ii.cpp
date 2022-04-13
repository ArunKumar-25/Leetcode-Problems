class Solution {
public:
    void solve(int idx,int target, vector<int>&candidates, vector<int>&ds, vector<vector<int>>&res)
    {
        if(target==0)
        {
            res.push_back(ds);
            return;
        }
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
                break;
            ds.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,ds,res);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,target,candidates,ds,res);
        return res;
    }
};