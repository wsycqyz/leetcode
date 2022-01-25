/*
 * @lc app=leetcode id=322 lang=c
 *
 * [322] Coin Change
 */

// @lc code=start


int coinChange(int* coins, int coinsSize, int amount){
    int i,j;
    int dp[amount+1];
    for (i=0;i<amount+1;i++) {
        dp[i]=amount+1;
    }
    dp[0]=0;

    for (i=1;i<amount+1;i++) {
        for (j=0;j<coinsSize;j++) {
            if (i-coins[j]>=0) {
                if (dp[i-coins[j]]+1<dp[i]) {
                    dp[i]=dp[i-coins[j]]+1;
                }
            }
        }
    }

    if (dp[amount]==amount+1) {
        return -1;
    }
    return dp[amount];
}
// @lc code=end

