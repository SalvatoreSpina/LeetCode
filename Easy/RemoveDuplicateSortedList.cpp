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
        ListNode* begin = head;
        if (!head) return begin;
        while (head->next) {
            auto next = head;
            while (next->next && next->val == head->val)
                next = next->next;
            if (!next || next->val == head->val) {
                head->next = NULL;
                return begin;
            }
            head->next = next;
            head = head->next;
        }
        return begin;
    }
};