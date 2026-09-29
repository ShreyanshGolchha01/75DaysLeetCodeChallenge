class Solution {
public:
    int dp[105][105][205];
    bool solve(int i, int j, int m, int n, vector<vector<char>>& mat,
               int balance) {
        if (balance < 0)
            return false;
        int remaining = (m - 1 - i) + (n - 1 - j);
        if (balance > remaining + 1)
            return false;
        if (i == m - 1 && j == n - 1) {
            return balance == 0;
        }
        if (dp[i][j][balance] != -1)
            return dp[i][j][balance];
        if (j + 1 < n) {
            if (solve(i, j + 1, m, n, mat,
                      balance + (mat[i][j + 1] == '(' ? 1 : -1)))
                return dp[i][j][balance] = true;
        }
        if (i + 1 < m) {
            if (solve(i + 1, j, m, n, mat,
                      balance + (mat[i + 1][j] == '(' ? 1 : -1)))
                return dp[i][j][balance] = true;
        }
        return dp[i][j][balance] = false;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if ((m + n) % 2 == 0)
            return false;
        memset(dp, -1, sizeof(dp));
        int balance = (grid[0][0] == '(' ? 1 : -1);
        return solve(0, 0, m, n, grid, balance);
    }
};