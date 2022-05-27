// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    struct cmp{
        bool operator()(const pair<int,int>&a,const pair<int,int>&b)
        {
            if(a.first!=b.first)
                return a.first<b.first;
            return a.second<b.second;
        }
    };
    vector<int>Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(int i=0;i<n;i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>res;
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }  
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 



  // } Driver Code Ends