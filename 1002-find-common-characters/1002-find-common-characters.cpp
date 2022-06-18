class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<vector<int>>count(words.size(),vector<int>(26,0));
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                count[i][words[i][j]-'a']++;
            }
        }
        string val;
        vector<string>res;
        for(int i=0;i<26;i++)
        {
            int x=count[0][i];
            for(int j=0;j<words.size();j++)
            {
                x=min(x,count[j][i]);
            }
            while(x--)
            {
                val=char(i+'a');
                res.push_back(val);
            }
        }
        return res;
    }
};