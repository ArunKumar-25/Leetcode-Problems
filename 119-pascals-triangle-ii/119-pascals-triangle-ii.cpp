class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res(34);
        for(int i=0;i<34;i++)
        {
            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;
            for(int j=1;j<i;j++)
            {
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res[rowIndex];
        
    }
};