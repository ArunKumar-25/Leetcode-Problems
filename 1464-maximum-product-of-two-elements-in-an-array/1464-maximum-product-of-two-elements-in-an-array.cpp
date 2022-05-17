class Solution {
public:
    int maxProduct(vector<int>& nums) {
       priority_queue<int>pq;
        for(auto it:nums)
            pq.push(it);
        int x=pq.top();
        pq.pop();
        return (x-1)*(pq.top()-1);
    }
};