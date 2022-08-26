class Solution {
public:
    bool ischeck(string a,string b)
    {
        int n=a.length();
        int m=b.length();
        if(n!=m)
            return false;
        int cnt[10]={0};
        for(int i=0;i<n;i++)
        {
            cnt[a[i]-'0']++;
            cnt[b[i]-'0']--;
        }
        for(int i=0;i<10;i++)
        {
            if(cnt[i]!=0)
                return false;
        }
        return true;      
    }
    bool reorderedPowerOf2(int n) {
        string s=to_string (n);
        for(int i=0;i<=30;i++)
        {
            string t=to_string((int)pow(2,i));
            // cout<<s<<" "<<t<<'\n';
            if(ischeck(s,t))
                return true;
        }
        return false;
        
    }
};