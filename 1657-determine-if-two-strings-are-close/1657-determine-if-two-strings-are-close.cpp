class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>s1(26,0),s2(26,0),s3(26,0),s4(26,0);
        for(int i=0;i<word1.size();i++)
        {
            s1[word1[i]-'a']=1;
            s3[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++)
        {
            s2[word2[i]-'a']=1;
            s4[word2[i]-'a']++;
        }
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
        return s1==s2 && s3==s4;
    }
};