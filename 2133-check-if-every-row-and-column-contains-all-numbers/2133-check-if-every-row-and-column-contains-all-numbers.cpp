class Solution {
public:
    bool isPossible(int y, int x, int z, vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++) {
            if (matrix[y][i] == z) return false; 
        }
        for(int i = 0; i < matrix.size(); i++) {
            if (matrix[i][x] == z) return false; 
        }
        return true;
    }
    bool checkValid(vector<vector<int>>& matrix) {
        for(int y = 0; y < matrix.size(); y++) {
            for(int x = 0; x < matrix.size(); x++) {
                int z = matrix[y][x];
                std::cout << z << " ";
                matrix[y][x] = 0;
                if(!isPossible(y, x, z, matrix)) return false;
                matrix[y][x] = z;
            }
            std::cout << '\n';
        }
        return true;
    }
};