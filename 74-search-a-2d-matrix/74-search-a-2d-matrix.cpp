class Solution {
public:
    int at(vector<vector<int>>& matrix, int index) {
        int x = index % matrix[0].size();
        int y = (index - x) / matrix[0].size();
        return matrix[y][x];
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0, high = rows * cols - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2 ;
            int val = at(matrix, mid);
            if(val == target) return true;
            else if (val < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};