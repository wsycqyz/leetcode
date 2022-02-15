/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *a,*b,*re=head;
        if (!head) {
            return NULL;
        }
        a=head; b=head;
        while (a&&b) {
            a=a->next;
            b=b->next;
            if (b) {
                b=b->next;
                if (b&&a==b) {
                    while(re!=a) {
                        a=a->next;
                        re=re->next;
                    }
                    return re;
                }
            }
        }

        return NULL;
    }
};
// @lc code=end

