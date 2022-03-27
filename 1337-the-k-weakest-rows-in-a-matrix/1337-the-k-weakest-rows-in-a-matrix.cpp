class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>weakest;
        for(int i=0;i<mat.size();i++)
        {
            int cnt=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    cnt++;
            }
            weakest.push_back(make_pair(cnt,i));
        }
        sort(weakest.begin(),weakest.end());
        int i=0;
        vector<int>res;
        while(k--)
        {
            res.push_back(weakest[i++].second);
        }
        return res;
    }
};