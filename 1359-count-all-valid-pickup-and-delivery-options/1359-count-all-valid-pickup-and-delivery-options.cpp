class Solution {
public:

    int countOrders(int n) {
        long long ans = 1;
        for (int i=2;i<=2*n;i++){
            ans*=i; 
            
            if (i%2==0){
                ans/=2;  
            }
            ans = ans%((long long)pow(10,9)+7);  
        }
        return ans;
    }
};