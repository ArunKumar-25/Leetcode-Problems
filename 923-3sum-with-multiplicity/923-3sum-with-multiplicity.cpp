class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         int ans=0;
        int mod=1e9+7;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                ans += mp[target-arr[i]-arr[j]];
            }
            ans =ans%mod;
            mp[arr[i]]++;
        }
        return ans%mod;
    }
};