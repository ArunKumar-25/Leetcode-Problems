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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode * res=l1,* prev;
        int remain=0;
        while(l1 || l2){
            int temp=0;
            if(l1 && l2){
                temp=l2->val ;
                l2=l2->next;
            }
            else if(l2){
                prev->next=l2;
                l1=l2;
                l2=NULL;
            }
            temp+=l1->val + remain;
            l1->val=temp%10;
            prev=l1;
            l1=l1->next;
            remain=temp/10;
        }
        
        if(remain) prev->next=new ListNode(remain);
        
        return res;
    }
};