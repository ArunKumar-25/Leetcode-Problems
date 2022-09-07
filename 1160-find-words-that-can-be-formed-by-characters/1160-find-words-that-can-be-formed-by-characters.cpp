class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int sum=0;
        for(auto ch:chars)
            mp[ch]++;
        for(auto word:words)
        {
            unordered_map<char,int>mp1;
            bool f=true;
            for(auto ch:word)
            {
                if(++mp1[ch]>mp[ch])
                {
                    f=false;
                    break;
                }
            }
            if(f)
                sum+=word.length();
        }
        return sum;
    }
};