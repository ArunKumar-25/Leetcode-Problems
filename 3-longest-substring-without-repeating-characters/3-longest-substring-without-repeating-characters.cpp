class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int i=0,j=0;
        int len=0;
        while(j<s.size())
        {
            if(mp[s[j]]!=-1)
                i=max(mp[s[j]]+1,i);
            mp[s[j]]=j;
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};