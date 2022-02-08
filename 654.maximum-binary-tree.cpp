/*
 * @lc app=leetcode id=654 lang=cpp
 *
 * [654] Maximum Binary Tree
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
    int size;
    TreeNode* helper(vector<int>& nums, int a, int b) {
        if (a<0||b<0||a>size||b>size||a>b) {
            return NULL;
        }
        //cout << "a=" << a << "," << "b=" << b << endl;
        int i=a;
        int max=-1;
        int max_index=-1;
        TreeNode *tmp;
        while(i<=b) {
            if (max<nums[i]) {
                max=nums[i];
                max_index=i;
            }
            i++;
        }
        //cout << nums[max_index] << endl;
        tmp=new TreeNode(nums[max_index]);
        tmp->left=helper(nums, a, max_index-1);
        tmp->right=helper(nums, max_index+1, b);
        return tmp;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        size=nums.size()-1;
        return helper(nums, 0, size);
    }
};
// @lc code=end

