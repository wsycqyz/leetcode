/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pre=NULL,*a=head,*b;
        bool found;
        if (!head) return head;
        while(a&&a->next) {
            b=a->next;
            found=false;
            while(b&&a->val==b->val) {
                b=b->next;
                found=true;
            }
            if (!found) {
                pre=a;
                a=b;
                continue;
            }
            if (pre) {
                pre->next=b;
                a=b;
            } else {
                head=b;
                a=b;
            }
        }
        return head;
    }
};
// @lc code=end

