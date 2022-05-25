// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        priority_queue<long long,vector<long long>,greater<long long>>pq(A,A+N);
        long long start=0,end=0;
        while(true)
        {
            if(K1==1)
            {
                start=pq.top();
            }
            if(K2==1)
            {
                end=pq.top();
                break;
            }
            K1--;
            K2--;
            pq.pop();
        }
        // cout<<start<<" "<<end<<'\n';
        long long res=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]>start && A[i]<end)
                res+=A[i];
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends