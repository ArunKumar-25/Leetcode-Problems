class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        temp=nums;
        sort(temp.begin(),temp.end());
        int i=0;
        while(i<n)
        {
            if(temp[i]!=nums[i])
                break;
            i++;
                
        }
        int j=nums.size()-1;
        while(j>=0)
        {
            if(temp[j]!=nums[j])
                break;
            j--;
        }
        return i==n && j==-1?0:j-i+1;
    }
};