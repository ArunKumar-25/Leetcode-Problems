class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++)
            cnt+=abs(m-nums[i]);
        return cnt;
    }
};