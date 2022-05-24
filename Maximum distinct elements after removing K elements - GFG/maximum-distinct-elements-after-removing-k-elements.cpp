// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        vector<int>v;
        for(auto it:mp)
            v.push_back(it.second);
        int temp=0;
        for(int i=0;i<v.size();i++)
            temp+=v[i]-1;
        if(k<=temp)
            return v.size();
        k=k-temp;
        int ans=v.size();
        while(k--)
        {
            ans--;
        }
        return ans;
        
    	
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