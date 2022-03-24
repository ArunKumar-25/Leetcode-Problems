class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                len++; 
                if(i>0 && s[i-1]==' ')
                    break;
            }
        }
        return len;
    }
};