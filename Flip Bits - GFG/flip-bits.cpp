//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here'
        int one=0;
        for(int i=0;i<n;i++)
            if(a[i]==1){
                a[i]=-1;
                one++;
            }
            else
                a[i]=1;
        
        int maxsum=0,currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum+=a[i];
            maxsum=max(maxsum,currsum);
            if(currsum<0)
                currsum=0;
            
        }
        return one+maxsum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends