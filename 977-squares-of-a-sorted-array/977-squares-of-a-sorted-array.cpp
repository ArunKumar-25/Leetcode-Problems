class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0,right=n-1;
        int x=n-1;
        while(left<=right)
        {
            int l_value=nums[left]*nums[left];
            int r_value=nums[right]*nums[right];
            
            if(l_value>r_value)
            {
                ans[x--]=l_value;
                left++;
            }
                
            else
            {
                ans[x--]=r_value;
                right--;
            }
                
        }
        return ans;
    }
};