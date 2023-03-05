class Solution {
public:
    int minJumps(vector<int>& v) {
        map<int,vector<int>>m;
        for(int i=0;i<v.size();i++){
            m[v[i]].push_back(i);
        }
        int n=v.size();
        vector<int>vis(n,0);
        queue<pair<int,int>>q;
        q.push({0,0});
        while(q.size()){
                auto j = q.front();
                int ct=j.second;
                int in=j.first;
                q.pop();
                if(in==n-1)return ct;
                if(in-1>=0 && !vis[in-1]){
                    q.push({in-1,ct+1});
                }
                if(in+1<n && !vis[in+1]){
                    q.push({in+1,ct+1});
                }
                if(!vis[in]){
                    vis[in]=1;
                    vector<int>vec=m[v[in]];
                    for(int g=0;g<vec.size();g++){
                        if(!vis[vec[g]]){
                            vis[vec[g]]=1;
                            q.push({vec[g],ct+1});
                        }
                    }
                }
        }
        return 1;
    }
};