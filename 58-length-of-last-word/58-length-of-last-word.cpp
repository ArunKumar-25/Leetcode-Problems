class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0,n=s.length();
        while(n>0)
        {
            if(s[--n]!=' ')
                len++;
            else if(len>0)
                return len;
        }
        return len;
    }
};