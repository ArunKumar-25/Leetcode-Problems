// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
	long long minSum(vector<int> a,int N,int K){
	    priority_queue<float>pq(a.begin(),a.end());
	    for(int i=0;i<N;i++)
	    {
	        float t=pq.top();
	        pq.pop();
	        if(t<K)
	            t=0;
	        else
	        {
	            float p=t*0.1;
	            if(p>K)
	                t-=p;
	            else
	                t-=K;
	            
	        }
	        pq.push(t);
	    }
	    float sum = 0;
	    for(int i = 0; i < N; i++)
	    {
	        sum += pq.top();
	        pq.pop();
	    }
	    return (long long)sum;
	}
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        vector<int> a(N);
        for(int i = 0;i<N;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.minSum(a,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends