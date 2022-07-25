class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                first=m;
                r=m-1;
            }
            else if(nums[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        l=0,r=nums.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                last=m;
                l=m+1;
            }
            else if(nums[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        return {first,last};
        
    }
};