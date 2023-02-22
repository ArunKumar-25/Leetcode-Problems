class Solution {
    bool isPossible(int mid,vector<int>weights,int day){
        int count=1,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                count++;
                sum=weights[i];
            }
        }
        if(count<=day){
            return true;
        }
        return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
            if(weights[i]>low){
                low=weights[i];
            }
        }
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};