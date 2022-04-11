class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i,vector<int>nums,vector<int>&ds,int n)  
    {
        if(i>=n)
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        solve(i+1,nums,ds,n);
        ds.pop_back();
        solve(i+1,nums,ds,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        solve(0,nums,ds,nums.size());
        return ans;
    }
};