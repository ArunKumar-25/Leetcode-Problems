class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxsum=INT_MIN,sum=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]++;
                sum+=nums[i];
            }
            else
            {
                while(j<=i && mp.find(nums[i])!=mp.end())
                {
                    mp.erase(nums[j]);
                    sum-=nums[j++]; 
                }
                mp[nums[i]]++;   
                sum+=nums[i];
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};