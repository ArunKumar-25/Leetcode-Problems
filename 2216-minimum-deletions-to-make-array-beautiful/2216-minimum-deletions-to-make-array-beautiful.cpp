class Solution {
public:
    int minDeletion(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=nums.size(),cnt=0;
        if(n==1)
            return 1;
        for(int i=0;i<n-1;i++)
        {
            if((i+cnt)%2==0 && nums[i]==nums[i+1])
            {
                cnt++;
            }
        }
        if((n-cnt)%2==1)
            cnt++;
        return cnt;
        
    }
};