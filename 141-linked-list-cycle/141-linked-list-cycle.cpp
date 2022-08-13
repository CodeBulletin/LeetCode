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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> m;
        while(head != nullptr) {
            if (m.find(head) == m.end())
                m.insert(head);
            else {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};