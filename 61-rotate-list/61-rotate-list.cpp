class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       
        ListNode *temp = head, *ptr = head;
        if(head == NULL)
            return NULL;
		
        if(head -> next == NULL)
            return head;
        
        int cnt = 1;
        
		// counting nodes in list
        while(temp->next != NULL)
        {
            temp = temp -> next;
            cnt++;
        }
        k = k % cnt;
        
        while(k--)
        {
            while(temp->next != NULL)
                temp = temp -> next;
        
            temp -> next = head;
            head = temp;
            ptr = temp;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }

            temp -> next = NULL;
			
            temp = ptr;
            
        }
        return head;
    }
};