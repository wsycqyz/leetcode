/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int re1,re2,i,n;
        vector<int> dp(nums.size()+2,0);
        n=nums.size();
        if (n==1) {
            return nums[0];
        }
        for (i=n-1;i>0;i--) {
            if (nums[i]+dp[i+2]>dp[i+1]) {
                dp[i]=nums[i]+dp[i+2];
            } else {
                dp[i]=dp[i+1];
            }
        }
        re1=dp[1];
        cout << re1 << endl;
        dp[n-1]=0;
        for (i=n-2;i>=0;i--) {
            if (nums[i]+dp[i+2]>dp[i+1]) {
                dp[i]=nums[i]+dp[i+2];
            } else {
                dp[i]=dp[i+1];
            }
        }
        re2=dp[0];
        cout << re2 << endl;
        if (re1>re2) {
            return re1;
        } else {
            return re2;
        }
    }
};
// @lc code=end

