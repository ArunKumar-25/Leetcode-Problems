// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int sum, int arr[],int index, vector<vector<int>>&dp){
        if(index<0) return 0;
        if(sum==0) return 1;
        if(dp[index][sum]!=-1) return dp[index][sum];
        if(arr[index]<=sum){
            return dp[index][sum]=solve(sum,arr,index-1,dp) or solve(sum-arr[index],arr,index-1,dp);
        }
        return dp[index][sum]=solve(sum,arr,index-1,dp);
        
    }
    int equalPartition(int N, int arr[])
    {
         int sum=0;
         for(int i=0; i<N; i++){
             sum+=arr[i];
         }
         if(sum%2!=0) return 0;
         sum/=2;
         vector<vector<int>>dp(N, vector<int>(sum+1,-1));
         return solve(sum,arr,N-1,dp);
         
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends