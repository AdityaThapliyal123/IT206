class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> un;
            for(int j=0;j<9;j++){
                if(un.find(board[i][j]) != un.end() && board[i][j] != '.'){
                    return false;
                }
                un.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> un;
            for(int j=0;j<9;j++){
                if(un.find(board[j][i]) != un.end() && board[j][i] != '.'){
                    return false;
                }
                un.insert(board[j][i]);
            }
        }
        
        for (int block = 0; block < 9; block++) {
            unordered_set<char> boxSet;
            int rowStart = (block / 3) * 3;
            int colStart = (block % 3) * 3;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char val = board[rowStart + i][colStart + j];
                    if (val != '.') {
                        if (boxSet.find(val) != boxSet.end()) {
                            return false;
                        }
                        boxSet.insert(val);
                    }
                }
            }
        }

        return true;
    }
};
