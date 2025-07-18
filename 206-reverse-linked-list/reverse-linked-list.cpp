class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = NULL;
        ListNode* next = NULL;

        while(current!=NULL){
            next = current->next;
            current->next = previous;

            previous = current;
            current = next;
        }
        return previous;
    }
};