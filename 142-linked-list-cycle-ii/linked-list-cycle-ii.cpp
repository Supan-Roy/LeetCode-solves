class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){  // meeting point
                isCycle=true;
                break;
            }
        }
        if(!isCycle) return NULL;  // no cycle
        
        slow = head;  // reset slow
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;  // cycle entry point
    }
};