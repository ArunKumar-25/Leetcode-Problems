//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int N , int L , int R) {
        // code here
        while(L<=R)
        {
            int mask=1<<(L-1);
            N=N|mask;
            L++;
        }
        return N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends