class Solution {
public:
    bool wordPattern(string pattern, string s) { 
        stringstream ss(s);
        string word;
        vector<string>vec;
        set<string>st;
        while(ss>>word)
        {
            vec.push_back(word);
            st.insert(word);
        }
        if(vec.size()!=pattern.length())
            return false;
        unordered_map<char,string>mp;
        for(int i=0;i<vec.size();i++)
        {
            if(mp.find(pattern[i])!=mp.end() && mp[pattern[i]]!=vec[i])
            {
                return false;
            }
            mp[pattern[i]]=vec[i];
        }
        return st.size()==mp.size()&&true;
        
    }
};