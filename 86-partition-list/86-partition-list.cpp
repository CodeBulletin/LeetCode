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
    ListNode* partition(ListNode* head, int x) {
        ListNode* A1 = new ListNode(0);
        ListNode* A2 = new ListNode(0);
        
        ListNode* B1 = A1;
        ListNode* B2 = A2;
        
        while(head != nullptr) {
            if(head->val < x) {
                A1->next = new ListNode(head->val);
                A1 = A1->next;
            } 
            else {
                A2->next = new ListNode(head->val);
                A2 = A2->next;
            }
            head = head->next;
        }
        
        A1->next = B2->next;
        return B1->next;
    }
};