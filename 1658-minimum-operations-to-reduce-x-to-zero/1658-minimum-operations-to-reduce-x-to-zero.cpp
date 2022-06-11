class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum=0,currsum=0,i=0,maxlen=INT_MIN;
        totalsum=accumulate(nums.begin(),nums.end(),totalsum);
        int target=totalsum-x;
        for(int j=0;j<nums.size();j++)
        {
            currsum+=nums[j];
            while(i<=j && currsum>target)
                currsum-=nums[i++];
            if(currsum==target)
                maxlen=max(maxlen,j-i+1);
        }
        return maxlen!=INT_MIN?nums.size()-maxlen:-1;
    }
};