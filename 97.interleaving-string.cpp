/*
 * @lc app=leetcode id=97 lang=cpp
 *
 * [97] Interleaving String
 */

// @lc code=start
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int l1,l2,l3;
        l1=s1.length();l2=s2.length();l3=s3.length();
        if (l1+l2!=l3) {
            return false;
        }
        bool dp[l1+1][l2+1];
        dp[0][0]=true;
        int i,j;
        for (i=0;i<=l1;i++) {
            for (j=0;j<=l2;j++) {
                if (i>0&&j>0) {
                    dp[i][j]=(dp[i][j-1]&&(s2[j-1]==s3[i+j-1]))
                             ||
                             (dp[i-1][j]&&(s1[i-1]==s3[i+j-1]));
                    continue;
                }
                if (i>0&&j<=0) {
                    dp[i][j]=dp[i-1][j]&&(s1[i-1]==s3[i+j-1]);
                    continue;
                }
                if (i<=0&&j>0) {
                    dp[i][j]=dp[i][j-1]&&(s2[j-1]==s3[i+j-1]);
                }
            }
        }
        return dp[l1][l2];
    }
};
// @lc code=end

