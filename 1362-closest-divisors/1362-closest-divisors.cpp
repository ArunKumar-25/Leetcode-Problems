class Solution {
public:
    set<pair<int,int>>divisior(int n)
    {
        set<pair<int,int>>s;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                s.insert(make_pair(min(i,n/i),max(i,n/i)));
            }
        }
        return s;
    }
    vector<int> closestDivisors(int num) {
        set<pair<int,int>>s1=divisior(num+1);
        set<pair<int,int>>s2=divisior(num+2);
        s1.insert(s2.begin(),s2.end());
        vector<int>v;
        int x,y,mini=INT_MAX;
        for(auto z:s1)
        {
            if(z.second-z.first<mini)
            {
                x=z.first;
                y=z.second;
                mini=y-x;
            }
        }
        return v={x,y};
        
    }
};