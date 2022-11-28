class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win,loss;
        for(int i=0;i<matches.size();i++)
            loss[matches[i][1]]++;
        for(int i=0;i<matches.size();i++)
        {
            if(loss.find(matches[i][0])==loss.end())
                win[matches[i][0]]++;
        }
        vector<vector<int>>res;
        vector<int>t1,t2;
        for(auto x:win)
            t1.push_back(x.first);
        for(auto x:loss)
            if(x.second==1)
                t2.push_back(x.first);
        res.push_back(t1);
        res.push_back(t2);
        return res;
    }
};