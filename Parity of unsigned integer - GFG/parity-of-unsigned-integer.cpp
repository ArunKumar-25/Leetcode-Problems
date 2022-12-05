//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string computeParity(int N) {
        // code here
        int parity=0;
        while(N)
        {
            int mask=N&(~N+1);
            N=N^mask;
            parity++;
        }
        return parity%2==0?"even":"odd";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.computeParity(N) << endl;
    }
    return 0;
}
// } Driver Code Ends