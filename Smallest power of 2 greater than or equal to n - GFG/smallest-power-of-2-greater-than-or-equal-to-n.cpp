//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long nearestPowerOf2(long long N){
        //code here
        if(N==1)
            return 1;
        int bit=(long long)log2(N)+1;
        if((N&(N-1))==0)
            bit--;
        // cout<<bit<<'\n';
        return (long long)pow(2,bit);
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.nearestPowerOf2(N)<<"\n";
    }
}
// } Driver Code Ends