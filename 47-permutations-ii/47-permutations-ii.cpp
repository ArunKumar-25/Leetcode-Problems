class Solution {
public:
    void solve(int idx,vector<int>& nums,vector<vector<int>>&res)
    {
        if(idx==nums.size())
        {
            res.push_back(nums);
            return;
        }
        set<int>s;
        for(int i=idx;i<nums.size();i++)
        {
           if(s.find(nums[i])!=s.end()) continue;
            s.insert(nums[i]);
            swap(nums[i],nums[idx]);
            solve(idx+1,nums,res);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        solve(0,nums,res);
        return res;
    }
};