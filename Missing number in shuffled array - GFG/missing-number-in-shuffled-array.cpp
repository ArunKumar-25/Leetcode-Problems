//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    long long findMissing(long long a[], long long b[], int n)
    {
        long long res=0;
        for(int i=0;i<n;i++)
            res^=a[i];
        for(int i=0;i<n-1;i++)
            res^=b[i];
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n], b[n-1];

        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
          cin>>b[i];
        }
        Solution ob;
        cout<<ob.findMissing(a, b, n)<<endl;
    }
}


// } Driver Code Ends