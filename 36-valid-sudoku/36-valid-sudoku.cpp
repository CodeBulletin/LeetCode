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
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int y = 0; y < 9; y++) {
            for(int x = 0; x < 9; x++) {
                if (board[y][x] != '.') {
                    char z = board[y][x];
                    board[y][x] = '.';
                    if(!isPossible(y, x, z, board)) {
                        return false;
                    }
                    board[y][x] = z;
                }
            }
        }
        return true;
    }
};