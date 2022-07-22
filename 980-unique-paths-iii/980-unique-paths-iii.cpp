class Solution {
public:
    int solutions = 0;
    int empty = 1;
    
    void DFS(vector<vector<int>>& grid, int x, int y, int count) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1){
            return;
        }
        
        if (grid[x][y] == 2) {
            if(empty == count){
                solutions++; 
            }
            return;
        }
        grid[x][y] = -1;
        DFS(grid, x+1, y, count+1);
        DFS(grid, x-1, y, count+1);
        DFS(grid, x, y+1, count+1);
        DFS(grid, x, y-1, count+1);
        grid[x][y] = 0;        
        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int start_x = 0;
        int start_y = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1){ 
                    start_x = i, start_y = j;
                }
                if (grid[i][j] == 0) {
                    empty++;
                }                     
                 
            }
        }
        DFS(grid, start_x, start_y, 0);
        return solutions;
    }
};