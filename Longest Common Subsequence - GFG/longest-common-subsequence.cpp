// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
   public:
   // static int t[1001][1001];
   int solve(int n, int m, string s1, string s2,vector<vector<int>>&t)
   {
       if(n == 0 || m == 0)
       {
           return 0;
       }
       if(t[n][m]!=-1)
       {
           return t[n][m];
       }
       if(s1[n-1] == s2[m-1])
       {
          return t[n][m] = 1+solve(n-1,m-1,s1,s2,t);
           
       }
       else
       {
           t[n][m] = max(solve(n,m-1,s1,s2,t),solve(n-1,m,s1,s2,t));
           return t[n][m];
       }
   }
   int lcs(int n, int m, string s1, string s2)
   {
       vector<vector<int>>t(n+1,vector<int>(m+1,-1));
       int x = solve(n,m,s1,s2,t);
       return x;
   }
};

// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends