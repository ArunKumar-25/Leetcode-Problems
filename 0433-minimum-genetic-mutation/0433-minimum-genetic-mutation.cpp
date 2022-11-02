class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string>str{bank.begin(),bank.end()};
        if(!str.count(end)) 
            return -1;
        queue<string> q;
        q.push(start);
        int steps=0,s;
        string cur,t;
        while(!q.empty()){
            s=q.size();
            while(s--){
                cur=q.front();
                q.pop();
                if(cur==end) 
                    return steps;
                str.erase(cur);
                for(int i=0;i<8;i++)
                {
                    t=cur;
                    t[i]='A';
                    if(str.count(t)) 
                        q.push(t);
                    t[i]='C';
                    if(str.count(t))
                        q.push(t);
                    t[i]='G';
                    if(str.count(t))
                        q.push(t);
                    t[i]='T';
                    if(str.count(t)) 
                        q.push(t);}}
            steps++;}
        return -1;
    }
};