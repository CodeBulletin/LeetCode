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
    ListNode* getNextNode(ListNode* l) {
        return (l != nullptr) ? l->next : nullptr; 
    }
    int getDigit(ListNode* l) {
        return (l != nullptr) ? l->val : 0; 
    }
    void insert(ListNode*& l, int val) {
        l = new ListNode(val);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int Carry = 0;
        ListNode* lnode = new ListNode();
        ListNode* l = lnode;
        ListNode* n1 = l1;
        ListNode* n2 = l2;
        while(n1 != nullptr or n2 != nullptr) {
            int sum = getDigit(n1) + getDigit(n2) + Carry;
            int digit = (sum)%10;
            Carry = (sum - digit)/10;
            insert(lnode->next, digit);
            lnode = lnode->next;
            
            n1 = getNextNode(n1);
            n2 = getNextNode(n2);
        }
        if(Carry != 0) {
            insert(lnode->next, Carry);
            lnode = lnode->next;
        }
        lnode = l->next;
        delete l;
        return lnode;
    }
};