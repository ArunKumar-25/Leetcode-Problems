class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int target=nums.size()*(nums.size()+1)/2;
        int sum=0;
        sum=accumulate(nums.begin(),nums.end(),sum);
        return target-sum;
    }
};