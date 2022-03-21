/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> re;
        for (int i=0;i<nums.size();i++) {
            int x = nums[i];
            int y = target - x;
            if (mp.count(y)) {
                re.push_back(i);
                re.push_back(mp[y]);
                break;
            }
            mp[nums[i]]=i;
        }
        return re;
    }
};
// @lc code=end

