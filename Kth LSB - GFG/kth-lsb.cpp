//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int KthLSB(long long int n, int k){
	    //complete the function here
	    long long int mask=1LL<<(k-1);
	    if((n&mask)==0)
	        return 0;
	    return 1;
	    
	}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        int k;
        cin >> n >> k;
        Solution ob;
        
        cout << ob.KthLSB(n, k) << endl;
    }
return 0;
}


// } Driver Code Ends