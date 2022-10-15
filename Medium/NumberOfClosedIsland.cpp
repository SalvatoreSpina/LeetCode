class Solution {
    int count, width, height;
    
    bool dfs(vector<vector<int>>& g, int i, int j){
        if (i < 0 || j < 0 || i >= width || j >= height) return false;
        if (g[i][j] == 1) return true;
        g[i][j] = 1;
        bool d1 = dfs(g, i+1, j);
        bool d2 = dfs(g, i, j+1);
        bool d3 = dfs(g, i-1, j);
        bool d4 = dfs(g, i, j-1);
        return d1 && d2 && d3 && d4;
    }
    
public:
    int closedIsland(vector<vector<int>>& grid) {
        width = grid.size();
        height = grid[0].size();
        for (int i = 0; i < width; i++){
            for (int j = 0; j < height; j++){
                if (grid[i][j] == 0) count += dfs(grid, i, j);
            }
        }
        return count;
    }
};