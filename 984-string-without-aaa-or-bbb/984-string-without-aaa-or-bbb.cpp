class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string res="";
        char ca='a',cb='b';
        if(b>a)
        {
            swap(a,b);
            swap(ca,cb);
        }
            
        while(a>0)
        {
            res+=ca;
            a--;
            if(a>b)
            {
                res+=ca;
                a--;
            }
            if(b>0)
            {
                res+=cb;
                b--;
            }    
        }
        return res;
    }
};