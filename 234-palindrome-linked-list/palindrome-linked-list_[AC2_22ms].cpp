// Given a singly linked list, determine if it is a palindrome.
//
// Follow up:
// Could you do it in O(n) time and O(1) space?


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
    bool isPalindrome(ListNode* head)
    {
        return check(head, head);
    }

    bool check(ListNode*& head, ListNode* p)
    {
        if (!p) { return true; }
        bool isPal = check(head, p->next);
        if (head->val != p->val)
            return false;
        head = head->next;
        return isPal;
    }
};
