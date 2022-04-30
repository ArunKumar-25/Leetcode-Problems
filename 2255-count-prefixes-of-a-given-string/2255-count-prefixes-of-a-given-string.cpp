class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        map<string,int>mp;
        for(auto x:words)
            mp[x]++;
        string t="";
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            t+=s[i];
            if(mp.find(t)!=mp.end())
                cnt+=mp[t];
        }
        return cnt;
    }
};