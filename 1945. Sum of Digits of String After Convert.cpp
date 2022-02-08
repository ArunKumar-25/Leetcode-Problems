class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int num=s[i]-'a'+1;
            if(num<9)
                sum+=num;
            else
                sum+=num%10+num/10;
        }
        while(k>1)
        {
            int s=0;
            while(sum)
            {
                s+=sum%10;
                sum/=10;
            }
            sum=s;
            k--;
        }
        return sum;
    }
};