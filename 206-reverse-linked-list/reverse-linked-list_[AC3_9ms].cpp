// Reverse a singly linked list.
//
// click to show more hints.
//
// Hint:
// A linked list can be reversed either iteratively or recursively. Could you implement both?


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
    ListNode* reverseList(ListNode* head)
    {
        ListNode *ans = nullptr;
        ListNode *tmp = nullptr;
        while (head) {
            tmp = head->next;
            head->next = ans;
            ans = head;
            head = tmp;
        }
        return ans;
    }
};
