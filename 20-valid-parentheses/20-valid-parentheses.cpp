class Solution {
public:
    bool isValid(char a,char b)
    {
        return (a=='(' && b==')')||(a=='{' && b=='}')||(a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<char>st;
        if(s.length()%2!=0)
            return 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
                continue;
            }
            else
            {
                if(st.empty())
                    return 0;
                if(isValid(st.top(),s[i]))
                    st.pop();
                else
                    return 0;
            }
            
        }
         return st.empty()?1:0;
    }
};