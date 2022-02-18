/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

多数投票算法
https://zh.wikipedia.org/wiki/%E5%A4%9A%E6%95%B0%E6%8A%95%E7%A5%A8%E7%AE%97%E6%B3%95

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,a=0,b=0;
        for (i=0;i<nums.size();i++) {
            if (a==0) {
                a++;
                b=nums[i];
                continue;
            }
            if (b==nums[i]) {
                a++;
                continue;
            }
            if (b!=nums[i]) {
                a--;
            }
        }
        return b;
    }
};
// @lc code=end

