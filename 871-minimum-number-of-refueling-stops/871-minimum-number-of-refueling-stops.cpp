class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size(); 
        vector<long long> t(n+1, 0);
        t[0] = startFuel;
        
        for(int i = 1; i<n+1; i++) {
            for(int j = i; j>=0; j--) {
                if(t[j] >= stations[i-1][0]) {
                    t[j+1] = max(t[j+1], t[j] + stations[i-1][1]);
                }
            }
        }
        for(int j = 0; j<n+1; j++) {
            if(t[j] >= target)
                return j;
        }
        return -1;
    }
};