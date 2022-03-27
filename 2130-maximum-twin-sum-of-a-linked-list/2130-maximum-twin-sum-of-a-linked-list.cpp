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
    int pairSum(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        deque<int>dq;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow->next->next!=NULL)
        {
            dq.push_back(slow->val);
            dq.push_back(fast->val);
            slow=slow->next->next;
            fast=fast->next->next;
        }
        dq.push_back(slow->val);
        dq.push_back(fast->val);
        int maxsum=0;
        while(!dq.empty())
        {
            maxsum=max(maxsum,dq.front()+dq.back());
            dq.pop_front();
            dq.pop_back();
        }
        return maxsum;
        
    }
};