class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int diff=0;
        for(int i=0;i<n;i++)
        {
            if(mini>nums[i])
                mini=nums[i];
            else if(diff<nums[i]-mini)
                diff=max(diff,nums[i]-mini);
        }
        return diff==0?-1:diff;
    }
};