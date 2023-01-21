class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0,cnt=0;
        for(int i=0;i<s.length();i++)
        {
            cnt+=s[i]=='R'?1:-1;
            res+=cnt==0;
        }
        return res;
    }
};