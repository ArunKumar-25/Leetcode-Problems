//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
//User function Template for C++




class Solution{
  public:
    int findX(int arr[], int n, int q) {
        // code here
        int minflip=INT_MAX,minNum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int num=q^arr[i],flip=0,curr=arr[i];
            while(num)
            {
                num=num&(num-1);
                flip++;
            }
            if(flip<minflip)
            {
                minflip=flip;
                minNum=curr;
            }
            if(flip==minflip && curr<minNum)
            {
                minNum=curr;
            }
        }
        return minNum;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.findX(arr, n, q);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends