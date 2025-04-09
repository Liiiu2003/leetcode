class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail = head;
        ListNode* dummy = new ListNode( 0, head );
        if ( ! head->next ) return NULL;
        for ( int i = 0 ; i < n ; i++ )
            tail = tail->next;
    
        while ( tail && tail->next ) {
            head = head->next;
            tail = tail->next;
        }

        if ( !tail ) return dummy->next->next;
        head->next = head->next->next;
        return dummy->next;

    }
};
