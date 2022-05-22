class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>mp;
        for(auto it:s)
            mp[it]++;
        return mp.find(letter)==mp.end()?0:(mp[letter]*100)/s.size();
        
    }
};