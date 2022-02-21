/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int re=0;
        int i=0,j=0;
        int n=nums.size();
        while(i<n) {
            j=0;
            while(i<n&&nums[i]==1) {j++;i++;}
            re=max(re,j);
            i++;
        }
        return re;
    }
};
// @lc code=end

