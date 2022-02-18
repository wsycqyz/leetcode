/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int re=0;
        for (int i=0;i<nums.size();i++) {
            re = re ^ nums[i];
        }
        return re;
    }
};
// @lc code=end

