/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> re;
        sort(nums.begin(), nums.end());
        int left, right;

        for (int i=0;i<nums.size();i++) {
            if (i>0 && nums[i]==nums[i-1]) continue;
            left = i+1;
            right = nums.size() -1;
            while (left < right) {
                int threesum = nums[i]+nums[left]+nums[right];
                if (threesum>0) {
                    right -= 1;
                } else if (threesum < 0) {
                    left += 1;
                } else {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    re.push_back(tmp);
                    left += 1;
                    while (nums[left]==nums[left-1]&&left<right) left+= 1;
                }
            }
        }
        return re;
    }
};
// @lc code=end

