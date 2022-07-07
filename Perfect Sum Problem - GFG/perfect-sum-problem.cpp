// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int solve(int index, int arr[], int sum,vector<vector<int>>&dp){
	    if(sum<0 or index<0) return 0;
	    if(sum==0 and index==0){
	        return 1;
	    }
	    if(dp[index][sum]!=-1) return dp[index][sum];
	    if(sum>=arr[index-1]){
	        return dp[index][sum]= ((solve(index-1,arr,sum-arr[index-1],dp))%(int)(1e9+7) + (solve(index-1,arr,sum,dp))%(int)(1e9+7))%(int)(1e9+7);
	    }
	    return dp[index][sum]=(solve(index-1,arr,sum,dp))%(int)(1e9+7);
	}
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return solve(n,arr,sum,dp);
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends