class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0)
        {
            int x=columnNumber%26;
            if(x==0)
            {
                res+='Z';
                columnNumber--;
            }
            else
                res+=(x+'A'-1);
            columnNumber/=26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};