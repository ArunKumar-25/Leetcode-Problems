// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        int cnt=0;
        while(K>=pq.top() && !pq.empty() && K>0)
        {
            K-=pq.top();
            cnt++;
            pq.pop();
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends