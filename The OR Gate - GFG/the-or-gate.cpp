//{ Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int orGate(vector<int> arr,int N){
        // code here 
        for(int i=0;i<N;i++)
            if(arr[i]==1)
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
        int N;
        cin>>N;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.orGate(v,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends