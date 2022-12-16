//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int N){
        // code here
        if(N==0)
            return 0;
        int x=1,power=0;
        while(2*x<=N)
        {
            x*=2;
            power++;
        }
        return power*pow(2,power-1)+(N-pow(2,power)+1)+countBits(N-pow(2,power));
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countBits(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends