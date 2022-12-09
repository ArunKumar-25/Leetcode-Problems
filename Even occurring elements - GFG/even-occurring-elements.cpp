//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> repeatingEven(int arr[], int n) {
        // code here
        vector<int>res;
        long long int _xor=0LL,pos;
        for(int i=0;i<n;i++)
        {
            pos=1LL<<arr[i];
            _xor^=pos;
        }
        // cout<<_xor<<'\n';
        for(int i=0;i<n;i++)
        {
            pos=1LL<<arr[i];
            if(!(_xor&pos)){
                res.push_back(arr[i]);
                _xor^=pos;
            }
            
        }
        sort(res.begin(),res.end());
        if(res.size()==0)
            return {-1};
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.repeatingEven(arr, n);
        for (auto ele : ans) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends