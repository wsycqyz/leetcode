/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int i,j;
        int re=0;
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (grid[i][j]==1) {
                    if (i==0) re++;
                    if (i==m-1) re++;
                    if (j==0) re++;
                    if (j==n-1) re++;
                    if (i-1>=0&&grid[i-1][j]==0) re++;
                    if (i+1<m&&grid[i+1][j]==0) re++;
                    if (j-1>=0&&grid[i][j-1]==0) re++;
                    if (j+1<n&&grid[i][j+1]==0) re++;
                }
            }
        }
        return re;
    }
};
// @lc code=end

