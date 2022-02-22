class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.size();
        string res="";
        int i=0;
        while(i<n)
        {
            if(i+2<n && s[i+2]=='#')
            {
                res+=((s[i]-'0')*10+(s[i+1]-'0')+'a'-1);
                i+=3;
            }
            else
            {
                res+=(s[i]-'0')+'a'-1;
                i++;
            }
                
        }
        return res;
    }
};