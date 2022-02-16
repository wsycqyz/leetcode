/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m,n,i,j;
        m=obstacleGrid.size();
        n=obstacleGrid[0].size();
        int dp[m][n];
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                dp[i][j]=0;
            }
        }
        dp[0][0]=1;

        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (obstacleGrid[i][j]==1) {
                    dp[i][j]=0;
                    continue;
                }
                if (i-1>=0) {
                    dp[i][j]+=dp[i-1][j];
                }
                if (j-1>=0) {
                    dp[i][j]+=dp[i][j-1];
                }
                //cout << i << "," << j << ":" << dp[i][j] << endl;
            }
        }

        return dp[m-1][n-1];
    }
};
// @lc code=end

