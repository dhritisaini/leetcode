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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v(k,NULL); 
        if(head==NULL)
            return v;
        ListNode* t=head;
        int len=0;
        while(t)
        {
            t=t->next;
            len++;
        }
        int n=len/k;
        int r=len%k;
        ListNode* cur=head, *prev=NULL;
        
        for(int i=0;i<k && cur;i++,r--)
        {
            v[i]=cur;
            for(int j=0;j<n+(r>0);j++)
            {
                prev=cur;
                cur=cur->next;
            }
            prev->next=NULL;
        }
        return v;
    }
};