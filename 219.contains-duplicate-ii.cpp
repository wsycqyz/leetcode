/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
        int i;
        for (i=0;i<nums.size();i++) {
            if (m.find(nums[i])==m.end()) {
                m[nums[i]]=i;
            } else {
                if (i-m[nums[i]]<=k) {
                    return true;
                } else {
                    m[nums[i]]=i;
                }
            }
        }
        return false;
    }
};
// @lc code=end

