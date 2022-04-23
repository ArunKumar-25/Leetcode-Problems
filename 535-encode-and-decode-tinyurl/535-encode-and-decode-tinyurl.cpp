class Solution {
public:
    map<string,string> mp;
    int n = 0;

    string encode(string longUrl) {
        string res = "http://tinyurl.com/" + to_string(n);
        n++;
        mp[res] = longUrl;
        return res;
    }

    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};