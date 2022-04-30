class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0,suff=0,pref=0;
        for(auto x:nums)
            sum+=x;
        int res=INT_MAX,ans;
        for(int i=0;i<nums.size();i++)
        {
            pref+=nums[i];
            suff=sum-pref;
            int t1=pref/(i+1);
            int t2;
            if((nums.size()-i-1)!=0)
                t2=suff/(nums.size()-i-1);
            else
                t2=0;
            if(res>abs(t1-t2))
            {
                res=abs(t1-t2);
                ans=i;
            }
        }
        return ans;
    }
};