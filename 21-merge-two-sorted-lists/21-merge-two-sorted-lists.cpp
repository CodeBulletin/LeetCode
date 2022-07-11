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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l = new ListNode();
        ListNode* k = l;
        int val;
        while(list1 != nullptr and list2 != nullptr) {
            if(list1->val > list2->val) {
                val = list2->val;
                list2 = list2->next;
            }
            else {
                val = list1->val;
                list1 = list1->next;
            }
            l->next = new ListNode(val);
            l = l->next;
        }
        while(list1 != nullptr) {
            l->next = new ListNode(list1->val);
            l = l->next;
            list1 = list1->next;
        }
        while(list2 != nullptr) {
            l->next = new ListNode(list2->val);
            l = l->next;
            list2 = list2->next;
        }
        ListNode* d = k;
        k = k->next;
        delete d;
        return k;
    }
};