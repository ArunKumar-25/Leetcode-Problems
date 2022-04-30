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
    ListNode* reverse(ListNode* root)
    {
        ListNode* prev=NULL;
        ListNode* next=root;
        
        while(next!=NULL)
        {
            next=root->next;
            root->next=prev;
            prev=root;
            root=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=reverse(slow->next);
        slow->next=NULL;
        slow=head;
        bool f=true;
        ListNode* curr=new ListNode(-1);
        head=curr;
        while(slow || fast!=NULL)
        {
            if(f)
            {
                curr->next=slow;
                slow=slow->next;
            }
            else
            {
                curr->next=fast;
                fast=fast->next;
            }
            f=!f;
            curr=curr->next;
        }
        head=head->next;
        
    }
};