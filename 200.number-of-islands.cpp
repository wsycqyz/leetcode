/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<char>>& grid, int x, int y) {
        int m,n;
        m=grid.size();
        n=grid[0].size();
        grid[x][y]='0';
        if (y+1<n&&grid[x][y+1]=='1') dfs(grid, x,y+1);
        if (x+1<m&&grid[x+1][y]=='1') dfs(grid, x+1,y);
        if (y-1>=0&&grid[x][y-1]=='1') dfs(grid, x,y-1);
        if (x-1>=0&&grid[x-1][y]=='1') dfs(grid, x-1,y);
    }

    int numIslands(vector<vector<char>>& grid) {
        int re=0;
        int i,j,m,n;
        m=grid.size();
        n=grid[0].size();

        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (grid[i][j]=='1') {
                    re++;
                    dfs(grid, i,j);
                }
            }
        }

        return re;
    }
};
// @lc code=end

