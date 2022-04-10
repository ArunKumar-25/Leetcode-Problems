class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        int record=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(ops[i]=="D")
            {
                int x=st.top();
                st.push(2*x);
            }
            else if(ops[i]=="C")
            {
                st.pop();
            }
            else 
            {
                st.push(stoi(ops[i]));
            }
        }
        while(!st.empty())
        {
            record+=st.top();
            st.pop();
        }
        return record;
    }
};