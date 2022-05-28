// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
            if(i<k-1)
                res.push_back(-1);
        }
        for(int i=k;i<n;i++)
        {
            res.push_back(pq.top());
            if(arr[i]>pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        res.push_back(pq.top());
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends