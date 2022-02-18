class Solution {
public:
    bool isVowel(char s)
    {
        return s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U';
    }
    string reverseVowels(string s) {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(isVowel(s[l]) && isVowel(s[r]))
            {
                swap(s[l++],s[r--]);
            }
            else if(!isVowel(s[l]))
                l++;
            else if(!isVowel(s[r]))
                r--;
            else 
            {
                l++;
                r--;
            }
        }
        return s;
    }
};