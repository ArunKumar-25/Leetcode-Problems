class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                v.push_back(mat[i][j]);
        }
        int k=0;
        vector<vector<int>>res(r,vector<int>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                res[i][j]=v[k];
                k++;
            }
        }
        return res;
    }
};