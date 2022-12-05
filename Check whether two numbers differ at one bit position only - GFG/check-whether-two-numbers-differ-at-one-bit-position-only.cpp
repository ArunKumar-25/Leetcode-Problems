//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int DifferOne(long int a, long int b) { 
        //complete the function here
        long int x=a^b;
        // cout<<x<<'\n';
        if((x&(x-1))==0)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int a, b;
        cin >> a >> b;
        Solution ob;
        cout << ob.DifferOne(a, b) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends