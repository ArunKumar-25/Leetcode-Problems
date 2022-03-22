class Solution {
public:
    string getSmallestString(int n, int k) {
        string res="";
        while(n)
        {
            int t=k-n;
            if(t>=26)
            {
                res+='z';
                k=k-26;
            }     
            else
            {
                res+='a'+t;
                k=k-t-1;
            }
            n--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};