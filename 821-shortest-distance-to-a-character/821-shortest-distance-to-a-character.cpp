class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>occur,res;
        int n=s.length();
        for(int i=0;i<n;i++)
            if(s[i]==c)
                occur.push_back(i);
        for(int i=0;i<n;i++)
        {
            int d=INT_MAX;
            for(int j=0;j<occur.size();j++)
            {
                d=min(d,abs(i-occur[j]));
            }
            res.push_back(d);
        }
        return res;
            
    }
};