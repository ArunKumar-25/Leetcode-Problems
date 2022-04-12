// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
void solve(int i,int s,vector<int>arr,vector<int>&res,int n)
{
    if(i==n)
    {
        res.push_back(s);
        return;
    }
    s+=arr[i];
    solve(i+1,s,arr,res,n);
    s-=arr[i];
    solve(i+1,s,arr,res,n);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>res;
        solve(0,0,arr,res,N);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends