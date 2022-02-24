/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1);
        dp[0]=0;
        int i,j;
        for (i=1;i<=amount;i++) {
            dp[i]=99999;
        }
        for (i=0;i<amount+1;i++) {
            for (j=0;j<coins.size();j++) {
                if (i-coins[j]>=0) {
                    dp[i]=min(dp[i], dp[i-coins[j]]+1);
                }
            }
        }
        return dp[amount]==99999?-1:dp[amount];
    }
};
// @lc code=end

