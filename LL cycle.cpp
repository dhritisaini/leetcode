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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;
        bool cycle=false;
        ListNode *slow=head, *fast=head;
        while(slow && fast)
        {
            slow=slow->next;
            if(!fast->next) return NULL;
            fast=fast->next->next;
            if(slow==fast)
            {
                cycle=true;
                break;
            } 
        }
        if(!cycle) return NULL;
        slow=head;
        while(slow != fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};