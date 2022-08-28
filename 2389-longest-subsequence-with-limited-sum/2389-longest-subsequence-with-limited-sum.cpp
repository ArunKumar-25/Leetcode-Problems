class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int sum=0,size=0,j=0;
            while(j<nums.size() && sum<queries[i])
            {
                sum+=nums[j];
                j++;
                if(sum<=queries[i])
                    size++;
            }
            ans.push_back(size);   
        }
        return ans;
    }
};