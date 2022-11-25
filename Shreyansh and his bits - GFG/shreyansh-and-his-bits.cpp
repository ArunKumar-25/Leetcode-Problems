//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
class Solution{
public:
    long long ncr(long long n,long long r,vector<vector<long long>>&dp)
    {
        if(r>n)
            return 0;
        if(r==0 || n==r)
            return 1;
        if(dp[n][r]!=-1)
            return dp[n][r];
        return dp[n][r]=ncr(n-1,r-1,dp)+ncr(n-1,r,dp);
    }
    long long count(long long x) {
        
        vector<vector<long long>>dp(40,vector<long long>(40,-1));
        long long bit=0,one=0,res=0;
        while(x!=0)
        {
            if(x&1)
            {
                res+=ncr(bit,++one,dp);
            }
            bit++;
            x=x>>1;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long x; cin >> x;
	    Solution ob;
	    cout << ob.count(x) << '\n';
	}
	return 0;
}
// } Driver Code Ends