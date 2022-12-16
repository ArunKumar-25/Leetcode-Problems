//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int find(int N){
        // code here
        int x=1,cnt=0;
        while(2*x<=N)
        {
            x*=2;
            cnt++;
        }
        // cout<<cnt<<'\n';
        return (N-pow(2,cnt))*2+1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends