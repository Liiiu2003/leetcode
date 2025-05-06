class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(-1); 
        ListNode* cur = head;
        if ( !head || !head->next ) return head;
        while ( cur ){

            ListNode* next = cur->next;
            ListNode* pre = dummy;

            while( pre->next && pre->next->val < cur->val ) {
                pre = pre->next;
            }

            cur->next = pre->next;
            pre->next = cur;
            cur = next;
            
        }
        
        return dummy->next;
    }
};
