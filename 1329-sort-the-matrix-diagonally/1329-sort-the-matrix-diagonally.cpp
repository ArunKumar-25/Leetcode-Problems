class Solution {
public:
    void csort(vector<vector<int>>& mat,int r,int c)
    {
        int m=mat.size();
        int n=mat[0].size();
        int i=r;
        int j=c;
        int arr[101]={0};
        while(i<m && j<n)
        {
            arr[mat[i][j]]++;
            i++;
            j++;
        }
        i=r;
        j=c;
        for(int k=1;k<=100;k++)
        {
            while(arr[k]>0)
            {
                mat[i][j]=k;
                arr[k]--;
                i++;
                j++;
            }
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++)
            csort(mat,i,0);
        for(int i=1;i<n;i++)
            csort(mat,0,i);
        return mat;    
    }
};