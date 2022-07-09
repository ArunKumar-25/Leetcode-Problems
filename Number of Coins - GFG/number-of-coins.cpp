// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int dp[M+1][V+1];
	    for(int i=0;i<M+1;i++)
	    {
            for(int j=0;j<V+1;j++)
            {
                if(i==0 and j>0)
                    dp[i][j]=INT_MAX-1;
                else if(j==0)
                    dp[i][j]=0;
            }
        }
        for(int j=1;j<V+1;j++)
        {
            if(j%coins[0]==0)
                dp[1][j]=j/coins[0];
            else
                dp[1][j]=INT_MAX-1;
        }
        for(int i=2;i<M+1;i++)
        {
            for(int j=1;j<V+1;j++)
            {
                
                if(coins[i-1]<=j)
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
	    return dp[M][V]==INT_MAX-1?-1:dp[M][V];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends