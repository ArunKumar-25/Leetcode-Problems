//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int n, long long int A[])
    {
        // code her
        long long int res=0,mod=1e9+7;
        for(int i=31;i>=0;i--)
        {
            long long int zero=0,one=0;
            for(int j=0;j<n;j++)
            {
                if((A[j]&(1LL<<i))==0)
                    zero++;
                else
                    one++;
            }
            res=((one*zero)%mod+res)%mod;
        }
        return (int)((res)%mod*2)%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends