// Given a sorted linked list, delete all duplicates such that each element appear only once.
//
//
// For example,
// Given 1->1->2, return 1->2.
// Given 1->1->2->3->3, return 1->2->3.


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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head) {
            ListNode *cur = head;
            ListNode *tmp = nullptr;
            while (cur->next) {
                if (cur->val == cur->next->val) {
                    tmp = cur->next;
                    *cur = *tmp;
                    delete tmp;
                } else
                    cur = cur->next;
            }
        }
        return head;
    }
};
