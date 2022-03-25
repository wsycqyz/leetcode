/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int i=0;
        int numsSize = nums.size();

        while(numsSize>0) {
            i+=numsSize;
            i-=nums[numsSize-1];
            numsSize--;
        }
        return i;
    }
};
// @lc code=end

