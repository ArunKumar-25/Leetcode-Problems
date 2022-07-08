class Solution {
public:
    int fin;
    int dp[22][102][101];
    int find(int prv,int i,int curr,vector<int>& houses, vector<vector<int>>& cost,int trgt)
    {
        if(prv!=-1&&dp[prv][i][curr]!=-1)return dp[prv][i][curr];
        
        if(curr==trgt)
        {
            int ans=0;
            for(int j=i;j<houses.size();j++)
            {
                if(houses[j]!=0&&houses[j]!=prv)return dp[prv][i][curr]=INT_MAX;
                if(houses[j]==0)
                 ans+=cost[j][prv-1];
            }   
            return dp[prv][i][curr]=ans;
        }
        
        if(i==houses.size())return dp[prv][i][curr]=INT_MAX;
        
        if(houses[i]!=0)
        {
            int tmp=curr;
            if(prv!=houses[i])tmp++;
            if(prv!=-1) return dp[prv][i][curr]=find(houses[i],i+1,tmp,houses,cost,trgt);
            else return find(houses[i],i+1,tmp,houses,cost,trgt);
        }
        
        int ans=INT_MAX;
        for(int j=1;j<=cost[0].size();j++)
        {
            int tmp=curr;
            if(j!=prv)tmp++;
           int tmp1= find(j,i+1,tmp,houses,cost,trgt);
          if(tmp1!=INT_MAX)ans=min(ans,tmp1+cost[i][j-1]);
        }
        if(prv==-1)return ans;
        else
        return dp[prv][i][curr]=ans;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        fin=INT_MAX;
        memset(dp,-1,sizeof(dp));
        fin =find(-1,0,0,houses,cost,target);
        if(fin==INT_MAX)return -1;
        return fin;
    }
};