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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /*
        if(headA==nullptr || headB==nullptr) return nullptr;
        vector<ListNode*> addresses;
        ListNode* temp;
        for(temp = headA; temp!=nullptr; temp = temp->next)
        {
            addresses.push_back(temp);
        }
        for(temp = headB; temp!=nullptr; temp = temp->next)
        {
            if(find(addresses.begin(), addresses.end(), temp)!=addresses.end())
            {
                return temp;
            }
        }
        return nullptr;
        */

        //getting the tail
        ListNode* tail = headA;
        while(tail->next){
            tail = tail->next;
        }

         //creating a loop
        tail->next = headA;

        //detecting and finding the intersection
        ListNode *fast = headB, *slow = headB;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

          if(slow==fast) {
                slow = headB;
             while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                //undoing the loop
                tail->next = NULL;
                return slow;
            };
        }
        tail->next = NULL;
        return NULL;
    }
};