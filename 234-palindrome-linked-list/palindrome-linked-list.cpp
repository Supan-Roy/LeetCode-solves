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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;

        // first half reverse
        while(fast && fast->next){
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        // odd length
        if(fast != nullptr){
            slow = slow->next;
        }
        // compare rev. first half & second half
        while(slow != nullptr){
            if(prev->val != slow->val){
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};