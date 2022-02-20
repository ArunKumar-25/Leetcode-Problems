class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>uset;
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string r = "r-"+to_string(i)+"-"+to_string(board[i][j]);
                    string c = "c-"+to_string(j)+"-"+to_string(board[i][j]);
                    int x=i/3,y=j/3;
                    string box = "b-"+to_string(x)+"-"+to_string(y)+"-"+to_string(board[i][j]);
                    
                    if(!uset.insert(r).second || !uset.insert(c).second || !uset.insert(box).second){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};