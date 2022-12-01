class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int vowel=0,i=0,j=s.length()-1;
        while(i<j)
        {
            if(isVowel(s[i]))
                vowel++;
            if(isVowel(s[j]))
                vowel--;
            i++;
            j--;
        }
        return vowel==0;
    }
};