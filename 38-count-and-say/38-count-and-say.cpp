class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string p=countAndSay(n-1);
        int i=0;int count=1;
        string temp="";
        while(i<p.size()-1){
            if(p[i]==p[i+1])
               count++;
            else
            {
                temp= temp+to_string(count)+p[i];count=1;
            }
            
            i++; 
        } ;
        if(count!=1)
           temp+=to_string(count)+p[i-1]; 
        if(count==1)
           temp=temp+"1"+p[p.size()-1];
        return temp;
    }
};