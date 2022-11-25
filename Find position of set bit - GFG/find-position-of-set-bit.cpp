//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int rsb=N&(~N+1);
        if(N==0 || (N^rsb)!=0)
            return -1;
        int pos=0;
        while(rsb)
        {
            if(rsb&1)
                break;
            rsb=rsb>>1;
            pos++;
        }
        return pos+1;
            
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
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends