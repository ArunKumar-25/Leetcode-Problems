class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        int cnt=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if((k>0 && mp.find(i->first+k)!=mp.end()) || (k==0 && i->second>1))
                cnt++;
        }
        return cnt;
    }
};