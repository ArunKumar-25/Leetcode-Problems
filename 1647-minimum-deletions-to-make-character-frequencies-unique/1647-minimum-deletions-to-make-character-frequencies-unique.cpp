class Solution {
public:
    int minDeletions(string s) {
      int ans=0;
      unordered_map<char,int>mp;
      for (auto ch:s) 
          mp[ch]++;
      unordered_set<int>seen;
      for (auto[k,v]:mp) {
        while(seen.find(v)!=seen.end()) 
        {
          v--;
          ans++;
        }
        if(v>0)
            seen.insert(v);
      }
      return ans;
    }
};