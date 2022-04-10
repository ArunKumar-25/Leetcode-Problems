class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e=0,o=1;
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v[e]=nums[i];
                e+=2;
            }
            else
            {
                v[o]+=nums[i];
                o+=2;
            }
        }
        return v;
    }
};