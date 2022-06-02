class Solution {
public:
    string digitSum(string s, int k) {
        while(1)
        {
            if(s.length()<=k)
                return s;
            int sum=0;
            string ans="";
            for(int i=0;i<s.length();i++)
            {
                if(i!=0 && i%k==0)
                {
                    ans+=to_string(sum);
                    sum=0;
                }
                sum+=s[i]-'0';
            }
            ans+=to_string(sum);
            s=ans;
        }
    }
};