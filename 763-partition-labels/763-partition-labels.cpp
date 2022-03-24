class Solution {
public:

    vector<int> partitionLabels(string s) {
        int n=s.length();
        vector<int>res;
        map<char,int>mp;
        for(int i=0;i<n;i++)
            mp[s[i]]=i;
        int prev=-1,curr=0;
        for(int i=0;i<n;i++)
        {
            curr=max(curr,mp[s[i]]);
            if(i==curr)
            {
                res.push_back(curr-prev);
                prev=curr;
            }
            
        }
        return res;
    }
};