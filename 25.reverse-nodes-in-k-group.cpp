/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
    ListNode* getkth(ListNode* head, int k) {
        while(head && k>0) {
            head=head->next;
            k--;
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode *GroupPrev = &dummy, *GroupNext;
        ListNode *kth;
        ListNode *tmp, *pre, *cur;

        while(kth=getkth(GroupPrev,k)) {
            GroupNext = kth->next;
            pre = kth->next;
            cur = GroupPrev->next;

            while(cur!=GroupNext) {
                tmp = cur->next;
                cur->next = pre;
                pre = cur;
                cur = tmp;
            }

            GroupPrev->next = pre;
            while(GroupPrev->next != GroupNext) GroupPrev=GroupPrev->next;
        }        

        return dummy.next;
    }
};
// @lc code=end

