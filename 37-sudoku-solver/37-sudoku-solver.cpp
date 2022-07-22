class Solution {
public:
    string charset = "123456789";
    
    bool isPossible(int y, int x, char n, vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++)
            if(board[y][i] == n) return false;
        for(int i = 0; i < 9; i++) 
            if(board[i][x] == n) return false;
        int X = int(x / 3) * 3;
        int Y = int(y / 3) * 3;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                if(board[Y+i][X+j] == n) return false;
        return true;
    }
    
    bool solve(vector<vector<char>>& board) {
        for(int y = 0; y < 9; y++) {
            for(int x = 0; x < 9; x++) {
                if (board[y][x] == '.') {
                    for(char k: charset) {
                        if(isPossible(y, x, k, board)) {
                            board[y][x] = k;
                            if(solve(board)) return true;
                            else board[y][x] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        bool x = solve(board);
    }
};