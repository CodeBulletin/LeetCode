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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *back = head, *front = head;
        int diff = 0;
        while (front != nullptr) {
            if (diff > n) {
                back = back->next;
            } else {
                diff++;
            }
            front = front->next;
        }
        if (diff > n) {
            back->next = back->next->next;
        } else {
            head = head->next;
        }
        return head;
    }
};