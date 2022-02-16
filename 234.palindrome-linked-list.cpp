/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*> s;
        ListNode *a=head;
        if (!head||head->next==NULL) return true;
        while(a) {
            s.push_back(a);
            a=a->next;
        }
        a=head;
        while(a&&s.size()>0) {
            if (a->val!=s.back()->val) {
                return false;
            }
            a=a->next;
            s.pop_back();
        }
        return true;
    }
};
// @lc code=end

