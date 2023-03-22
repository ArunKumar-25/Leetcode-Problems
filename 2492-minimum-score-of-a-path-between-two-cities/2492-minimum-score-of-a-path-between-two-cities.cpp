class Solution {
public:
    int f[100001], c[100001];
    int find(int x) {
        return f[x] == 0 || f[x] == x ? f[x] = x : f[x] = find(f[x]);
    }
    int minScore(int n, vector<vector<int>>& e) {
        for (auto &z : e) {
            int x = find(z[0]), t = z[2] - 10001; 
            int y = find(z[1]);
            f[x] = y;
            c[y] = min({c[x], c[y], t});
        }
        return c[find(1)] + 10001;
    }
};