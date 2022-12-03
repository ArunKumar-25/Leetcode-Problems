class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>freq('z'+1,{0,0});
        for(auto x:s)
        {
            freq[x]={freq[x].first+1,x};
        }
        sort(freq.begin(),freq.end());
        string res="";
        for(auto x:freq)
            res=string(x.first,x.second)+res;
        return res;
    }
};