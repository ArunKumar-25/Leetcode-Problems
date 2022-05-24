// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
            pq.push(arr[i]);
        int cnt=0;
        while(pq.top()<k)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            pq.push(x+y);
            cnt++;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends