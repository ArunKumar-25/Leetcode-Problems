//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here 
	    ll zeroend=1;
	    ll oneend=1;
	    ll sum=zeroend+oneend;
	    if(n==1)
	        return sum;
	    ll i=2,mod=1e9+7;
	    while(i<=n)
	    {
	        oneend=zeroend;
	        zeroend=sum;
	        sum=(oneend+zeroend)%mod;
	        i++;
	    }
	    return sum%mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends