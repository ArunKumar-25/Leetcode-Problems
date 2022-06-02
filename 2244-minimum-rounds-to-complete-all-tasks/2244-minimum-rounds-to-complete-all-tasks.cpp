class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for(auto x:tasks)
            mp[x]++;
        int cnt=0;
        for(auto x:mp)
        {
            if(x.second==1)
                return -1;
            else if(x.second%3==0)
                cnt+=x.second/3;
            else
                cnt+=x.second/3+1;
        }
        return cnt;
    }
};