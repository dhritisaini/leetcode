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
    
    bool isPalindrome(ListNode* head) {
     
        if(!head || !head->next)
            return true;
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=slow;
        ListNode* c=slow->next;
        slow->next=NULL;
        while(c)
        {
            ListNode* temp=c->next;
            c->next=prev;
            prev=c;
            c=temp;
        }
        ListNode* l=head;
        ListNode* r=prev;
        
        while(l && r)
        {
            if(l->val!=r->val)
                return false;
            l=l->next;
            r=r->next;
        }
        return true;
    }
};