class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]<=temp[1])
            {
                temp[1]=max(intervals[i][1],temp[1]);
            }
            else
            {
                res.push_back(temp);
                temp=intervals[i];
            }
        }
        res.push_back(temp);
        return res;
    }
};