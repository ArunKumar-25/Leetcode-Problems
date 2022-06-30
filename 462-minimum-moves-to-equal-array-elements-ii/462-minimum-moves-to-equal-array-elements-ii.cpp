class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        sort(nums.begin(),nums.end());
        int m=nums[n/2];
        for(int i=0;i<n;i++)
            cnt+=abs(m-nums[i]);
        return cnt;
    }
};