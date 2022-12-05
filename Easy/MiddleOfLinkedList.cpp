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
    ListNode* middleNode(ListNode* head) {
        ListNode *iter = head, *fast_iter = head;
        while (fast_iter && fast_iter->next) {
            iter = iter->next;
            fast_iter = fast_iter->next->next;
        }
        return iter;
    }
};