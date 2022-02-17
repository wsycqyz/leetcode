/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                matrix[i][j]-='0';
            }
        }
        int dp[m][n];
        dp[0][0]=matrix[0][0];
        int t;
        int re=dp[0][0];
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (i==0 || j==0) {
                    dp[i][j]=matrix[i][j];
                } else if (matrix[i][j]==1) {
                    if (dp[i-1][j]==dp[i][j-1]&&dp[i][j-1]==dp[i-1][j-1]) {
                        if (dp[i-1][j]>0) {
                            dp[i][j]=pow(sqrt(dp[i-1][j])+1,2);
                        } else {
                            dp[i][j]=1;
                        }
                    } else {
                        t=min(dp[i-1][j], min(dp[i][j-1],dp[i-1][j-1]));
                        dp[i][j]=pow(sqrt(t)+1,2);
                    }
                } else {
                    dp[i][j]=0;
                }
                //cout << i << " " << j << ": " << dp[i][j] << endl;
                re=max(re, dp[i][j]);
            }
        }
        return re;
    }
};
// @lc code=end

