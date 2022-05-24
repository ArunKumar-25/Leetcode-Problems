// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
        set<int>st(arr,arr+n);
        return (n-st.size()>=k)?st.size():n-k;
    	
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout <<ob.maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}
  // } Driver Code Ends