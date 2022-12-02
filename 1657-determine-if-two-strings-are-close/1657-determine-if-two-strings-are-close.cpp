class Solution {
public:
    struct comp {
    template <typename T>

    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        return l.first < r.first;
    }
};
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        if(n1!=n2)
            return false;
        map<int,int>mp1,mp2;
        for(int i=0;i<n1;i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto x:mp1)
        {
            if(mp2.find(x.first)==mp2.end())
                return false;
        }
        set<pair<char,int>, comp> st1(mp1.begin(),mp1.end());
        set<pair<char,int>, comp> st2(mp2.begin(),mp2.end());
        if(st1.size()!=st2.size())
            return false;
        for(auto i=st1.begin(),j=st2.begin();i!=st1.end();i++,j++)
        {
            if(i->second!=j->second)
                return false;
        }
        return true;
    }
};