class Solution {
public:
    vector<int> dp; 
    bool changeTurn(int x, int mask, int k) {
        if(k<=0) return false;
        if(dp[mask]!=-1) return dp[mask];
        for(int j=1;j<=x;j++) {
            dp[mask] = false;
            if(!(mask&(1<<j))) {
                dp[mask] = dp[mask] | !changeTurn(x,mask|(1<<j),k-j);
                if(dp[mask]) return dp[mask] = true;
            }
        }
        return dp[mask] = false;
    }
    bool canIWin(int x, int k) {
        dp = vector<int>(1<<(x+1),-1);
        if(k==0) return true;
        if((x*(x+1))/2<k) return false;
        int mask = 0;
        return changeTurn(x,mask,k);
    }
};