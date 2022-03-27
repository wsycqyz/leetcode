/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>> re;
    vector<int> quad;  
public:
    void helper(vector<int>& nums, int k, int start, int target) {
        if (k!=2) {
            for (int i=start; i<nums.size()-k+1; i++) {
                if (i>start&&nums[i]==nums[i-1]) {
                    continue;
                }
                quad.push_back(nums[i]);
                helper(nums, k-1, i+1, target-nums[i]);
                quad.pop_back();
            }
            return;
        }
        //base case k=2;
        int left = start;
        int right = nums.size() - 1;
        while (left<right) {
            if (nums[left]+nums[right]<target) {
                left+=1;
            } else if (nums[left]+nums[right]>target) {
                right-=1;
            } else {
                vector<int> tmp = quad;
                tmp.push_back(nums[left]);
                tmp.push_back(nums[right]);
                re.push_back(tmp);
                left += 1;
                while (left<right&&nums[left]==nums[left-1]) {
                    left += 1;
                }
            }
        }
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size()<4) {
            return re;
        }
        sort(nums.begin(), nums.end());
        helper(nums, 4, 0, target);
        return re;
    }
};
// @lc code=end

