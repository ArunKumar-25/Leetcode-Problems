class Solution {
public:
    string convert(string s, int numRows) {
        int length = s.length();
        int offset = 2 * numRows - 2;
        if (offset == 0) return s;
        
        vector<string> patterns(numRows);
        for (int i=0; i<length; i++) {
            int row = i % offset;
            if (numRows <= row) {
                row = offset - row;
            }
            patterns[row].append(1, s[i]);
        }
        
        string answer = "";
        for (auto pattern : patterns) {
            answer += pattern;
        }
        return answer;
    }
};