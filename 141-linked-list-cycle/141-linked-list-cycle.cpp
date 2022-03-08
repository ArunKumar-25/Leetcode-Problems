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
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL)
        {
            if(f->val==100001)
                return true;
            f->val=100001;
            f=f->next;
        }
        return false;
    }
};