class Solution {
public:
        bool halvesAreAlike(string s) {
        string str="aeiouAEIOU";
        int i=0;
        int j=s.length()-1;
        int c1=0,c2=0;
        while(i<j)
        {
            if(str.find(s[i++])<str.length())
               {
                   c1++;
                   
               }
        if(str.find(s[j--])<str.length())
               {
                   c2++;
                   
               }
        }
                  return c1==c2;
    }
};