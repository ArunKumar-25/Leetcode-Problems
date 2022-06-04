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
    struct cmp{
      bool operator()(ListNode* a,ListNode* b)
      {
          return a->val>b->val;
      }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
        for(int i=0;i<k;i++)
        {
            if(lists[i]!=NULL)
                pq.push(lists[i]);
        }
        ListNode* root=new ListNode(-1);
        ListNode* curr=root;
        while(!pq.empty())
        {
            ListNode* temp=pq.top();
            pq.pop();
            curr->next=temp;
            curr=temp;
            if(temp->next)
                pq.push(temp->next); 
        }
        return root->next;
        
    }
};