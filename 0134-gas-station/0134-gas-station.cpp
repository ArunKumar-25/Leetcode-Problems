class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,need=0,j=0;
        for(int i=0;i<gas.size();i++)
        {
            sum+=gas[i]-cost[i];
            need+=gas[i]-cost[i];
            if(need<0)
            {
                j=i+1;
                need=0;
            }
        }
        if(sum<0)
            return -1;
        return j;
    }
};