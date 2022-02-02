class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) 
    {
        unordered_map<string,vector<string>> mp;
        for(auto i:str)
        {
            string temp=i;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto j:mp)
            res.push_back(j.second);
        return res;
    }
};