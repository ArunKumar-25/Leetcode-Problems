class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='X')
            {
                res++;
                i+=2;
            }
        }
        return res;
    }
};