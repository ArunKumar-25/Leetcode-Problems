//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int setAllOddBits(long long int n) {
        // code here
        int pos=0;
        long long int x=n;
        while(x)
        {
            if(pos%2==0)
            {
                n=(n|(1<<pos));
            }
            x>>=1;
            pos++;
        }
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.setAllOddBits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends