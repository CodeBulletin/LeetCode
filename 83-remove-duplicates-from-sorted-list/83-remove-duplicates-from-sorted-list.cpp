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
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;
        ListNode* a = head;
        ListNode* b = a->next;
        while(b != nullptr) {
            if(a->val != b->val) {
                a = b;
                b = a->next;
            } else {
                a->next = b->next;
                b = a->next;
            }
        }
        return head;
    }
};