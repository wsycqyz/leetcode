/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        int i;
        int dp[n][2];
        dp[0][0]=nums[0];
        dp[0][1]=nums[0];
        int re=dp[0][0];
        for (i=1;i<n;i++) {
            dp[i][0]=max(nums[i], max(nums[i]*dp[i-1][0], nums[i]*dp[i-1][1]));
            dp[i][1]=min(nums[i], min(nums[i]*dp[i-1][0], nums[i]*dp[i-1][1]));
            //cout << dp[i][0] << " " << dp[i][1] << endl;
            re=max(re,dp[i][0]);
        }
        return re;
    }
};
// @lc code=end

