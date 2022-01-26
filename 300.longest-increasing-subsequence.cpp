/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        vector<int> dp(n,1);
        int re=1;

        for (i=1;i<n;i++) {
            for (j=0;j<i;j++) {
                if (nums[i]>nums[j] && dp[j]+1>dp[i]) {
                    dp[i]=dp[j]+1;
                    if (dp[i]>re) {
                        re=dp[i];
                    }
                }
            }
        }
        return re;        
    }
};
// @lc code=end

