class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue>target)
            return (startValue-target);
        int cnt=0;
        while(startValue<target)
        {
            if(target%2==0)
            {
                target/=2;
            }
            else
                target++;
            
            cnt++;
        }
        if(startValue>target)
        {
            cnt+=abs(startValue-target);
        }
        return cnt;
    }
};