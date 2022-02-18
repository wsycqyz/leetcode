/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        if (nums.size()<=1) return;
        while(true) {
            while(i<nums.size()&&nums[i]!=0) i++;
            if (i==nums.size()) return;
            while(j<nums.size()&&nums[j]==0) j++;
            if (j==nums.size()) return;
            //cout << "swap: " << i << " " << j << endl;
            if (i<j) {
                swap(nums[i],nums[j]);
            } else {
                j++;
            }
        }
    }
};
// @lc code=end

