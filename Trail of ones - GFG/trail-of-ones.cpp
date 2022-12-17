//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int numberOfConsecutiveOnes(int n){
        int a[n],b[n];
        a[0]=1;
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+b[i-1];
            b[i]=a[i-1];
        }
        int x=a[n-1]+b[n-1];
        return pow(2,n)-x;
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
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends