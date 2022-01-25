/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,j,mid;
        i=0;
        j=nums.size()-1;

        while(i<j) {
            if (nums[i]<nums[j]) {
                return nums[i];
            }
            mid=(i+j)/2;
            if (nums[i]<=nums[mid]) {
                i=mid+1;
            } else {
                j=mid;
            }
        }
        return nums[i];
    }
};
// @lc code=end

