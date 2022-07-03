class Solution {
public:
    Solution(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
      }
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos+=2;
            }
            else
            {
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
        
    }
};