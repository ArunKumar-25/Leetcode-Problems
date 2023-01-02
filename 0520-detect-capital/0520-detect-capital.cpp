class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        bool m1=true,m2=true,m3=true;
        for(int i=0;i<n;i++)
        {
            if(!(word[i]>='A' && word[i]<='Z'))
            {
                m1=false;
                break;
            }
        }
        if(m1)
            return true;
        for(int i=0;i<n;i++)
        {
            if(!(word[i]>='a' && word[i]<='z'))
            {
                m2=false;
                break;
            }
        }
        if(m2)
            return true;
        if(!(word[0]>='A' && word[0]<='Z'))
        {
            m3=false;
        }
        if(m3)
        {
            for(int i=1;i<n;i++)
            {
                if(!(word[i]>='a' && word[i]<='z'))
                {
                    m3=false;
                    break;
                }
            }
        }
        if(m3)
            return true;
        
        return false;
    }
};