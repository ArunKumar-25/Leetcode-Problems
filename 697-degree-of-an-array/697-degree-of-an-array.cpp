class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>cnt,first;
        int degree=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(first.count(nums[i])==0)
                first[nums[i]]=i;
            if(++cnt[nums[i]]>degree)
            {
                degree=cnt[nums[i]];
                res=i-first[nums[i]]+1;
            }
            else if(cnt[nums[i]]==degree)
            {
                res=min(res,i-first[nums[i]]+1);
            }
        }
        return res;
    }
};