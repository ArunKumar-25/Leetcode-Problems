//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void build(int idx,int low,int high,vector<int>&nums,vector<int>&seg)
    {
        if(low==high)
        {
            seg[idx]=nums[low];
            return;
        }
        int mid=low+(high-low)/2;
        build(2*idx+1,low,mid,nums,seg);
        build(2*idx+2,mid+1,high,nums,seg);
        seg[idx]=seg[2*idx+1]^seg[2*idx+2];
    }
    int query(int idx,int low,int high,int l,int r,vector<int>&seg)
    {
        if(r<low || high<l)
            return 0;
        if(low>=l && high<=r)
            return seg[idx];
        int mid=low+(high-low)/2;
        return query(2*idx+1,low,mid,l,r,seg)^query(2*idx+2,mid+1,high,l,r,seg);
    }
    int getXor(vector<int>&nums, int a, int b){
        int n=nums.size();
        vector<int>seg(4*n);
        build(0,0,n-1,nums,seg);
        
        return query(0,0,n-1,a,b,seg);
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int>nums(n);
        for(int i = 0; i < n; i++)cin >> nums[i];
        if(a > b)swap(a, b);
        Solution obj;
        int ans = obj.getXor(nums, a, b);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends