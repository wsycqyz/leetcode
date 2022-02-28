/*
 * @lc app=leetcode id=1143 lang=cpp
 *
 * [1143] Longest Common Subsequence
 */

// @lc code=start
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int i,j;
        int n=text1.length();
        int m=text2.length();
        int dp[n+1][m+1];

        for (i=n;i>=0;i--) {
            for (j=m;j>=0;j--) {
                if (i==n) {
                    dp[i][j]=0;
                    continue;
                }
                if (j==m) {
                    dp[i][j]=0;
                    continue;
                }
                if (text1[i]==text2[j]) {
                    dp[i][j]=dp[i+1][j+1]+1;
                } else {
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};
// @lc code=end

