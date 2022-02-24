/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int i,j;
        int dp[amount+1];
        for (i=0;i<amount+1;i++) {
            dp[i]=0;
        }
        dp[0]=1;
        for (i=0;i<coins.size();i++) {
            for (j=coins[i];j<amount+1;j++) {
                dp[j]+=dp[j-coins[i]];
            }
        }
        return dp[amount];
    }
};
// @lc code=end

