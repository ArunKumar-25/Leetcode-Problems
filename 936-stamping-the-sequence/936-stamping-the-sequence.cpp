class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) 
    {
        vector<int>ans,res;
        string str=target;
        string aim(target.length(),'*');
        while(str!=aim)
        {
            int tmp=remove(str,stamp);
            if(tmp==str.length()) 
                return res;
            ans.push_back(tmp);
        }
        for(int i=ans.size()-1;i>=0;i--) 
            res.push_back(ans[i]);
        return res;
    }
    int remove(string& str, string stamp){
        for(int i=0;i<str.length();i++){
            int j=0,tmp=i;
            bool flag=false;
            while(j<stamp.length()&&tmp<str.length()&&(str[tmp]=='*' || str[tmp]==stamp[j]))
            {
                if(str[tmp]==stamp[j]) 
                    flag=true;
                tmp++;
                j++;
            }
            if(j==stamp.length() && flag){
                for(int kter=0;kter<stamp.length();++kter)
                    str[i+kter]='*';
                return i;
            }
        }
        return str.length();
    }
};