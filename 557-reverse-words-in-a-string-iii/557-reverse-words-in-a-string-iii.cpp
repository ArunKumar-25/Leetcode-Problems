class Solution {
public:
    void reverse(string &s,int l,int r)
    {
        while(l<r)
        {
            swap(s[l++],s[r--]);
        }
    }
    string reverseWords(string s) {
        int n=s.size();
        int j=0;
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                reverse(s,j,i-1);
                j=i+1;
            }
        }
        reverse(s,j,i-1);
        return s;
    }
};