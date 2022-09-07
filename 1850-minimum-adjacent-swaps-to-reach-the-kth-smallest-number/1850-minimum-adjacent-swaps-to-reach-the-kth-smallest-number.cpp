class Solution {
public:
    void nextPermutation(string &s)
    {
        int i=s.length()-2;
        while(i>=0 && s[i]>=s[i+1])
            i--;
        if(i>=0)
        {
            int j=s.length()-1;
            while(j>=0 && s[j]<=s[i])
                j--;
            swap(s[i],s[j]);
        }
        reverse(s.begin()+i+1,s.end());
    }
    int minSteps(string s1,string s2)
    {
        int n=s1.length(),cnt=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            while(s1[i]!=s2[j])
                j++;
            while(i<j)
            {
                swap(s2[j-1],s2[j]);
                j--;
                cnt++;
            }
        }
        return cnt;
    }
    int getMinSwaps(string num, int k) {
        string t=num;
        while(k--)
            nextPermutation(num);
        return minSteps(t,num);
        
        
    }
};