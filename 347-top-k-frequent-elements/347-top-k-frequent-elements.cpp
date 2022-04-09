class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int ,int>mp;
        for(auto x:nums)
            mp[x]++;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
        {
            if(k)
            {
                res.push_back(x.first);
                k--;
            }
        }
        return res;
    }
};