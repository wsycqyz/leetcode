/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int numsSize = nums.size();
        vector<int> d(numsSize);
        int re;

        if (numsSize==0) {
            return 0;
        }

        d[0]=nums[0];
        re=d[0];

        for (i=1;i<numsSize;i++) {
            if (d[i-1]<0) {
                d[i]=nums[i];
            } else {
                d[i]=d[i-1]+nums[i];
            }
            re=max(re,d[i]);
        }

        return re;
    }
};
// @lc code=end

