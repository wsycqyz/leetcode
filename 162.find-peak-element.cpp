/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i,j,mid=0;
        i=0;
        j=nums.size()-1;

        while(i<j) {
            mid=(i+j)/2;
            if (nums[mid]<nums[mid+1]) {
                i=mid+1;
            } else {
                j=mid;
            }
        }

        return i;
    }
};
// @lc code=end

