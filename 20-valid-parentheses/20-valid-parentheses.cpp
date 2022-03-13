class Solution {
public:
    bool isMatch(char x,char y)
    {
        return (x=='(' && y==')')||(x=='{' && y=='}')||(x=='[' && y==']');
    }
    bool isValid(string s) {
        int n=s.length();
        stack<int>st;
        
        if(n%2!=0)
            return false;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                    st.push(s[i]);
                else
                {
                    if(st.empty())
                        return false;
                    else if(isMatch(st.top(),s[i]))
                        st.pop();
                    else
                        return false;
                }
            }
        }
        return st.empty()?1:0;
    }
};