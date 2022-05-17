class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++)
            pq.push(make_pair(score[i],i));
        vector<string>res(pq.size());
        int i=0;
        while(!pq.empty())
        {
            if(i==0)
                res[pq.top().second]="Gold Medal"; 
            else if(i==1)
                res[pq.top().second]="Silver Medal"; 
            else if(i==2)
                res[pq.top().second]="Bronze Medal";
            else
                res[pq.top().second]=to_string(i+1);
            i++;
            pq.pop();
        }
        return res;
    }
};