/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for (i=0;i<n;i++) {
            j=abs(nums[i])-1;
            nums[j]=nums[j]>0?-nums[j]:nums[j];
        }
        vector<int> re;
        for (i=0;i<n;i++) {
            if (nums[i]>0) {
                re.push_back(i+1);
            }
        }
        return re;
    }
};
// @lc code=end

