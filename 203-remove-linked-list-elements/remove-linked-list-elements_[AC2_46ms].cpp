// Remove all elements from a linked list of integers that have value val.
//
// Example
// Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6,  val = 6
// Return: 1 --> 2 --> 3 --> 4 --> 5
//
//
// Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.


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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode dummy(0);
        ListNode *cur, *pdummy = &dummy;
        pdummy->next = head;
        cur = pdummy;
        while (cur) {
            if (cur->next && cur->next->val == val)
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        return pdummy->next;
    }
};
