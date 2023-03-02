class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0, ind = 0;

        while (j < n) {
            char curChar = chars[i];
            while (j < n && chars[i] == chars[j]) j++;
            string freq = to_string(j - i);
            chars[ind++] = curChar;            
            if (freq.length() == 1) {
                if (freq != "1") chars[ind++] = freq[0];
            }
            else if (freq.length() == 2) {
                chars[ind++] = freq[0];
                chars[ind++] = freq[1];
            }
            else if (freq.length() == 3) {
                chars[ind++] = freq[0];
                chars[ind++] = freq[1];
                chars[ind++] = freq[2];
            }
            else if (freq.length() == 4) {
                chars[ind++] = freq[0];
                chars[ind++] = freq[1];
                chars[ind++] = freq[2];
                chars[ind++] = freq[3];
            }
            i = j;
        }

        return ind;
    }
};