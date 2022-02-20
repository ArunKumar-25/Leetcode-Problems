class Solution {
public:
    bool isAnagram(string s1,string s2)
    {
        int n=s1.size();
        int count[26]={0};
        for(int i=0;i<n;i++)
        {
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        for(int i=0;i<m-n+1;i++)
        {
            string temp=s2.substr(i,n);
            if(isAnagram(temp,s1))
                return true;
        }
        return false;
    }
};