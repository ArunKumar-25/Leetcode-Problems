class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum=0,right_sum=0,n=nums.size(),sum=0;
        right_sum=accumulate(nums.begin(),nums.end(),right_sum);
        for(int i=0;i<n;i++)
        {
            if(i-1>=0)
                left_sum+=nums[i-1];
            
            right_sum=right_sum-nums[i];
            if(left_sum==right_sum)
                return i;
        }
        return -1;
    }
};