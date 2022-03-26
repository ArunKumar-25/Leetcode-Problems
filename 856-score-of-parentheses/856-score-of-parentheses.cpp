class Solution {
public:
    int scoreOfParentheses(string s) {
        int level=0,score=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                level++;
            else
                level--;
            if(s[i]==')' && s[i-1]=='(')
                score+=pow(2,level);
        }
        return score;
    }
};