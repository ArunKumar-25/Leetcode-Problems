//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function for finding maximum and value pair
	int maxAND (int arr[], int n)
	{
	    // Complete the function
	    int res=0;
	    for(int i=31;i>=0;i--)
	    {
	        int pattern=res|(1<<i),cnt=0;
	        for(int j=0;j<n;j++)
	        {
	            if((arr[j]&pattern)==pattern)
	                cnt++;
	        }
	        if(cnt>=2)
	            res=res|(1<<i);
	        
	    }
	    return res;
	}
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout <<  ob.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends