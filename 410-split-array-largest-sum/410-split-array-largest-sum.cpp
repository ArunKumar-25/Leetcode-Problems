class Solution {
public:
    bool isValid(vector<int>&nums,int x,int m)
    {
        int n=nums.size();
        int sum=0,y=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum>x)
            {
                sum=nums[i];
                y++;
            }
        }
        if(y<=m)
            return true;
        return false;
    }
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int low=nums[0],high=0,res;
        for(int i=0;i<n;i++)
        {
            if(low<nums[i])
                low=nums[i];
            high+=nums[i];
        }
        if(m==n)
            return low;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isValid(nums,mid,m))
            {
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
};