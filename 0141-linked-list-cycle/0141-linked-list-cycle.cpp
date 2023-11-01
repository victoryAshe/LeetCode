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
        if(!head) return false;
        
        ListNode* temp = head;
        vector<ListNode*> vals;
        while(temp->next)
        {
            if(find(vals.begin(), vals.end(), temp) == vals.end())
            {
                   vals.push_back(temp);
            }
            else return true;
            
            temp = temp->next;
        }
        return false;
    }
};