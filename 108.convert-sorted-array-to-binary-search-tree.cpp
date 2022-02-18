/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int>& nums, int low, int high) {
        if (low>high) {
            return NULL;
        }
        if (low==high) {
            return new TreeNode(nums[low]);
        }
        int mid=(low+high)/2;
        TreeNode *tmp = new TreeNode(nums[mid]);
        tmp->left = helper(nums, low, mid-1);
        tmp->right = helper(nums, mid+1, high);
        return tmp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
};
// @lc code=end

