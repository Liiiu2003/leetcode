class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = new ListNode(0);
        ListNode* ans = head;
        int c = 0;
        while ( l1 || l2 || c ) {
            int sum = 0;
            if( l1 ) {
                sum += l1 -> val;
                l1 = l1 -> next;
            } // if
            if( l2 ) {
                sum += l2 -> val; 
                l2 = l2 -> next;
            }// if

            sum += c;
            c = sum / 10;
            sum %= 10;

            ans -> next = new ListNode(sum);
            ans = ans -> next;
        }

        return head->next;
    }
};
