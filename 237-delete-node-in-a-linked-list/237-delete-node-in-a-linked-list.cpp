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
    void deleteNode(ListNode* node) {
        ListNode* pointer = node, *back = nullptr;
        while(pointer->next) {
            pointer->val = pointer->next->val;
            back = pointer;
            pointer = pointer->next;
        }
        back->next = nullptr;
    }
};