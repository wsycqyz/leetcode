/*
 * @lc app=leetcode id=725 lang=cpp
 *
 * [725] Split Linked List in Parts
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<int> re1(k,0);
        vector<ListNode*> re2;
        int i,j,n=0;
        ListNode *a=head;
        while(a) {a=a->next;n++;}
        for (i=0;i<n/k;i++) {
            for (j=0;j<k;j++) { re1[j]++; }
        }
        for (i=0;i<n%k;i++) {
            re1[i]++;
        }
        for (i=0;i<k;i++) {
            //cout << re1[i] << " ";
            if (re1[i]==0) {
                re2.push_back(NULL);
                continue;
            }
            for (j=0;j<re1[i];j++) {
                if (j==0) {
                    re2.push_back(head);
                }
                if (j==re1[i]-1) {
                    a=head;
                    head=head->next;
                    a->next=NULL;
                } else {
                    head=head->next;
                }
            }
        }
        return re2;
    }
};
// @lc code=end

