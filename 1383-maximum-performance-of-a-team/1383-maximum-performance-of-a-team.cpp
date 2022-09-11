class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int, int>>v;
        priority_queue <int,vector<int>,greater<int>> pq;
        long sum=0,res=0;
        for(int i=0;i<n;i++)
            v.push_back({efficiency[i],speed[i]});
        sort(begin(v),end(v));
        
        for (int i=n-1;i>=0;i--) 
        {
            sum+=v[i].second;
            pq.push(v[i].second);
            if (pq.size()>k) 
            {
                sum-=pq.top();
                pq.pop();
            }
            res=max(res,sum*v[i].first);
        }
        return res%1000000007;
    }
};