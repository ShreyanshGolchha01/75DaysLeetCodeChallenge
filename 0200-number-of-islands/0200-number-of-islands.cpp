class Solution {
public:
    void dfs_count(vector<vector<char>> &grid, int i, int j){
        if((i >= grid.size() || i < 0) || (j >= grid[0].size()  || j < 0)){
            return;
        }
        if(grid[i][j] != '1') return;
        grid[i][j] = '2';
        dfs_count(grid,i-1,j);
        dfs_count(grid,i,j-1);
        dfs_count(grid,i+1,j);
        dfs_count(grid,i,j+1);
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    dfs_count(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
