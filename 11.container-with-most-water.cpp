/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int re = 0;
        int area;
        int left = 0, right = height.size() - 1;
        while (left < right) {
            area = (right - left) * min(height[left], height[right]);
            re = max(re, area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return re;
    }
};
// @lc code=end

