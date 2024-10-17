class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;   // To keep track of the previous node
        ListNode* curr = head;       // Start with the head of the list
        ListNode* next = nullptr;    // To keep track of the next node
        
        while (curr != nullptr) {
            next = curr->next;       // Store the next node
            curr->next = prev;       // Reverse the link
            prev = curr;             // Move prev and curr one step forward
            curr = next;
        }
        return prev;                 // prev will be the new head of the reversed list
    }
};

