/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i,j;
        for (i=0;i<grid.size();i++) {
            for (j=0;j<grid[i].size();j++) {
                if (i-1>=0 && j-1>=0) {
                    grid[i][j]=min(grid[i][j]+grid[i-1][j], grid[i][j]+grid[i][j-1]);
                    continue;
                }
                if (i-1>=0 && j-1<0) {
                    grid[i][j]+=grid[i-1][j];
                    continue;
                }
                if (i-1<0 && j-1>=0) {
                    grid[i][j]+=grid[i][j-1];
                }
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
// @lc code=end

