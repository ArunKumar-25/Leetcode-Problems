class Solution {
public:
    int removePalindromeSub(string s) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i++]!=s[j--]) return 2;
        }
        return 1;
    }
};