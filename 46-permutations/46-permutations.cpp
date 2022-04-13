class Solution {
public:
    void solve(vector<int>& nums,vector<int>& ds,vector<vector<int>>&res,vector<int>& freq)
    {
        if(nums.size()==ds.size())
        {
            res.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]!=1)
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(nums,ds,res,freq);
                ds.pop_back();
                freq[i]=0;
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ds,freq(nums.size(),0);
        solve(nums,ds,res,freq);
        return res;
    }
};