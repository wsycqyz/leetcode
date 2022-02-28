/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) {
        int i,j;
        vector<int> a;
        for (i=1;i<=sqrt(n);i++) {
            a.push_back(i*i);
        }
        vector<int> dp(n+1,n);
        dp[0]=0;
        for (i=0;i<=n;i++) {
            for (j=0;j<a.size();j++) {
                if (i+a[j]<=n) {
                    dp[i+a[j]]=min(dp[i]+1, dp[i+a[j]]);
                }
            }
        }
        return dp[n];
    }
};
// @lc code=end

