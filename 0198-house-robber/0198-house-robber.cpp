class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        vector<int>res;
        if(n>=1)
            res.push_back(nums[0]);
        if(n>=2)
            res.push_back(max(nums[0],nums[1]));
        for(int i=2;i<n;i++)
            res.push_back(max(res[i-1],res[i-2]+nums[i]));
        
        return res[n-1];
    }
};