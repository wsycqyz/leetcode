/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]!=nums[i-1]) {
                nums[left]=nums[i];
                left++;
            }
        }
        return left;
    }
};
// @lc code=end

