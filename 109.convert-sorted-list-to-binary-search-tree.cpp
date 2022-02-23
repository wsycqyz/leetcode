/*
 * @lc app=leetcode id=109 lang=cpp
 *
 * [109] Convert Sorted List to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper(vector<int>& list, int low, int high) {
        if (low>high||low<0||high>=list.size()) {
            return NULL;
        }
        int mid=(low+high)/2;
        TreeNode *tmp=new TreeNode(list[mid]);
        tmp->left=helper(list, low, mid-1);
        tmp->right=helper(list, mid+1, high);
        return tmp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> list;
        int n=0;
        ListNode *a=head;
        while(a) {
            list.push_back(a->val);
            a=a->next;
            n++;
        }
        return helper(list, 0, n-1);
    }
};
// @lc code=end

