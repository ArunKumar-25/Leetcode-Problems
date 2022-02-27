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
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* ptr1=list1,*ptr2=list2;
        while(list1 && list2)
        {
            if(list1->val<=list2->val)
            {
                while(list1->next && list1->next->val<=list2->val)
                 list1=list1->next;
                ListNode* temp=list1->next;
                list1->next=list2;
                list1=temp;
            }
            else
            {
                while(list2->next && list2->next->val<list1->val)
                    list2=list2->next;
                ListNode* temp=list2->next;
                list2->next=list1;
                list2=temp;
            }
        }
        if(ptr1->val <= ptr2->val) return ptr1;
        return ptr2;
        
    }
};