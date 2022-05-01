class Solution {
public:
    int secondHighest(string s) {
        int first=-1,second=-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                if(first<s[i]-'0')
                {
                    second=first;
                    first=s[i]-'0';
                }
                else if(second<s[i]-'0' && first!=s[i]-'0')
                    second=s[i]-'0';
            }
        }
        return second;
    }
};