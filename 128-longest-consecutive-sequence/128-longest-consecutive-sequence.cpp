class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int cnt=1;
        int res=0;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                continue;
            else if(nums[i]+1==nums[i+1])
            {
                cnt++;
            }
            else{
                res=max(res,cnt);
                cnt=1;
            }
        }
        res=max(res,cnt);
        return res;
    }
};