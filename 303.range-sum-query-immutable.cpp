/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
public:
    vector<int> n;
    NumArray(vector<int>& nums) {
        int i;
        if (nums.size()==0) return;
        n.push_back(nums[0]);
        for (i=1;i<nums.size();i++) {
            n.push_back(nums[i]+n.back());
        }
    }
    
    int sumRange(int left, int right) {
        return n[right]-(left==0?0:n[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

