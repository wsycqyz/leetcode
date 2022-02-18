/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        int i;
        for (i=0;i<nums.size();i++) {
            if (m.find(nums[i])==m.end()) {
                m[nums[i]]=1;
            } else {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

