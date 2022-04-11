class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int mod=1e9+7;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x++;
            pq.push(x);
        }
        long long int ans=1;
        while(pq.size()>0)
        {
            int x=pq.top();
            ans=(ans*x)%mod;
            pq.pop();
        }
        return ans;
        
    }
};