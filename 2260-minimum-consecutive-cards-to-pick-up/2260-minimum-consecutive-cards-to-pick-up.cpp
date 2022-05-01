class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       map<int,int>mp;
        int res=INT_MAX;
        for(int i=0;i<cards.size();i++)
        {
            if(mp.find(cards[i])!=mp.end())
            {
                res=min(i-mp[cards[i]]+1,res);
            }
            mp[cards[i]]=i;
        }
        return res==INT_MAX?-1:res;
    }
};