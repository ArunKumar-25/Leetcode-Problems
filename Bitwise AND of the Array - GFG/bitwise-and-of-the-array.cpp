//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int count(int N, vector<int> A,int X)
    {
        // code here
        int num=0,ans=INT_MAX;
        for(int i=31;i>=0;i--)
        {
            if((X&(1<<i))!=0)
            {
                num|=(1<<i);
            }
            else
            {
                int temp=num|(1<<i);
                int dontmodify=0;
                for(auto it:A)
                {
                    if((it&temp)==temp)
                        dontmodify++;
                }
                ans=min(ans,N-dontmodify);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> A(N);
        for(auto &i:A)
            cin>>i;
        Solution obj;
        int ans = obj.count(N, A, X);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends