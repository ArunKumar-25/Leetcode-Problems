//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    string is_power_of_eight(long long int n ) 
    {
        long long int bit=(long long int)log2(n);
        if(((long long int)(pow(2,bit))==n && n>=8)||n==1)
            return "Yes";
        return "No";
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int  n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_power_of_eight(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends