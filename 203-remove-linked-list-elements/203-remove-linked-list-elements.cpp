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
    ListNode* removeElements(ListNode* head, int val) {
        head = new ListNode(0, head);
        ListNode *back = head, *front = head->next;
        if (!front) return nullptr;
        while (front) {
            if (front->val == val) {
                back->next = back->next->next;
                front = back->next;
            }
            else if (back) {
                back = back->next;
                if (front)
                    front = front->next;
            }
        }
        
        return head->next;
    }
};