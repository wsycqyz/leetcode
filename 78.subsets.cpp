/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> re;
        vector<int> a;
        re.push_back(a);

        int i,j,k;
        for (i=0;i<nums.size();i++) {
            k=re.size();
            for (j=0;j<k;j++) {
                re.push_back(re[j]);
                re.back().push_back(nums[i]);
            }
        }

        return re;
    }
};
// @lc code=end

