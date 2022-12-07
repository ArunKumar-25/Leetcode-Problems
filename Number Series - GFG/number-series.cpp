//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findNth(int n){
        if(n&1)
            return 0;
        int mask=n&(~n+1);
        int cnt=0;
        // cout<<mask<<'\n';
        while(mask)
        {
            if((mask&1)==1)
            {
                return cnt;
            }
            cnt++;
            mask>>=1;
        }
        return 0;
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
        cout << ob.findNth(n) << endl;
    }
    return 0;
}

// } Driver Code Ends