class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(mp.count(ch)==0)
                mp[ch]=i;
            else
            {
                int d=i-mp[ch]-1;
                if(distance[ch-'a']!=d)
                    return false;
            }
        }
        return true;
    }
};