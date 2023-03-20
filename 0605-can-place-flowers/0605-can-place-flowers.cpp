class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n>flowerbed.size()/2+1)
            return false;
        int cnt=0;
        for(int i=0;i<flowerbed.size() && cnt <n;i++)
        {
            if(flowerbed[i]==0)
            {
                int prev=i==0?0:flowerbed[i-1];
                int next=i==flowerbed.size()-1?0:flowerbed[i+1];
                if(prev==0 && next==0)
                {
                    flowerbed[i]=1;
                    cnt++;
                }
            }
        }
        return cnt==n;
    }
};