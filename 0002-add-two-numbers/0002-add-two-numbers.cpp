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
    bool hasCarry = false;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* result = new ListNode();

        result->val = l1->val + l2->val;
        if(hasCarry)
        {
            result->val++;
            hasCarry = false;
        }

        if(result->val > 9)
        {
            hasCarry = true;
            result->val %= 10;
        }
        
        
        if(l1->next&&l2->next)
            result->next = addTwoNumbers(l1->next, l2->next);
        else if(l1->next || l2->next)
        {
            ListNode* temp = new ListNode();
            if(!l1->next)
                result->next = addTwoNumbers(temp, l2->next);
            if(!l2->next)
                result->next = addTwoNumbers(l1->next, temp);
        }
        else if(hasCarry)
        {
            result->next = new ListNode(1);
        }

        return result;
    }
    
    
    
};