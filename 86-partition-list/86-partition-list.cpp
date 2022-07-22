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
    ListNode* partition(ListNode* head, int x) {
        ListNode* first=new ListNode();
        ListNode* second=new ListNode();
        ListNode* curr=head,*curr1=first,*curr2=second;
        while(curr)
        {
            if(curr->val<x)
            {
                ListNode* t=new ListNode(curr->val);
                curr1->next=t;
                curr1=curr1->next;
            }
            else
            {
                ListNode* t=new ListNode(curr->val);
                curr2->next=t;
                curr2=curr2->next;
            }
            curr=curr->next;
        }
        curr1->next=second->next;
        return first->next;
    }
};