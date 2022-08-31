class Solution {
    
    void remove_adj(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
            return;
        if (grid[i][j] == '0' || grid[i][j] == '2') return;
        grid[i][j] = '2';
        remove_adj(grid, i, j-1);
        remove_adj(grid, i-1, j); 
        remove_adj(grid, i+1, j);
        remove_adj(grid, i, j+1);
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int counter = 0;
        for (size_t i = 0; i < grid.size(); i++) {
            for (size_t j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    remove_adj(grid, i, j);
                    counter++;
                }
            }
        }
        return counter;
    }
};