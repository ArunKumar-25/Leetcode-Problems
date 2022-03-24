class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        stringstream ss(s);
        string t;
        while(ss>>t)
        {
            v.push_back(t);
        }
        return v[v.size()-1].size();
        
    }
};