//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int setbit=0;
        while(b)
        {
            b=b&(b-1);
            setbit++;
        }
        int res=0;
        for(int i=31;i>=0 && setbit;i--)
        {
            if((a&(1<<i)))
            {
                res|=(1<<i);
                setbit--;
            }
                
        }
        for(int i=0;i<32 && setbit;i++)
        {
            if((a&(1<<i))==0)
            {
                res|=(1<<i);
                setbit--;
            }   
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends