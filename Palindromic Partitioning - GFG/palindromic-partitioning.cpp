// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPalindrome(string &s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int solve(string &s,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(isPalindrome(s,i,j))
            return dp[i][j]=0;
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int temp=solve(s,i,k,dp)+solve(s,k+1,j,dp)+1;
            if(temp<ans)
                ans=temp;
        }
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        int n=str.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(str,0,n-1,dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends