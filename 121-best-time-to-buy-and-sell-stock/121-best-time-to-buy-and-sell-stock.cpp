class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0,max_val=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(max_val<prices[i]) max_val=prices[i];
            else if(ans<max_val-prices[i]) ans=max_val-prices[i];
        }
        return ans;
    }
};