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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *tail = head;
        ListNode *pre = head;
        if ( !head || !head->next || k == 0 ) return head;


        int length = 1; 
        while ( tail->next ) {
            tail = tail -> next;
            length++;
        }

        tail -> next = pre;
        tail = tail -> next;

        for( int i = 0 ; i < (k % length) ; i++ ) {
            tail = tail -> next;
        }

        while ( tail -> next != head ) {
            pre = pre -> next;
            tail = tail -> next;
        }

        head = pre -> next;
        pre -> next = NULL;
        return head;
    }
};
