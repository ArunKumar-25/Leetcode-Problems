class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double,int>>distance;
        vector<vector<int>>res;
        for(int i=0;i<points.size();i++)
        {
            double dis=(double)sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            distance.push_back(make_pair(dis,i));
        }
        sort(distance.begin(),distance.end());
        int i=0;
        while(k--)
        {
            int index=distance[i].second;
            res.push_back(points[index]);
            i++;
        }
        return res;
    }
};