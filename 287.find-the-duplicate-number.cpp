/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;

        while(true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) break;
        }

        int slow2 = 0;
        while (true) {
            slow2 = nums[slow2];
            slow = nums[slow];
            if (slow2 == slow) return slow;
        }
        return 0;
    }
};
// @lc code=end

