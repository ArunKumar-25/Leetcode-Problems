class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int cnt[26]={0};
        if(n1!=n2)
            return false;
        
        for(int i=0;i<n1;i++)
        {
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(cnt[i])
                return false;
        }
        return true;
    }
};