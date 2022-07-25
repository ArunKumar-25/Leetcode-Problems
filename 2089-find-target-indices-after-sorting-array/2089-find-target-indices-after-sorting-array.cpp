class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int first=-1,last=-1;
        int l=0,r=nums.size()-1;
        sort(nums.begin(),nums.end());
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
        vector<int>res;
        if(first==-1 && last==-1)
            return res;
        for(int i=first;i<=last;i++)
            res.push_back(i);
        return res;
    }
};