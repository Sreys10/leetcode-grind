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
    ListNode* doubleIt(ListNode* head) {
    if (head->val >= 5) {
            ListNode* node = new ListNode(0, head);
            head = node;
        }
        stack<ListNode*> st;
        for (auto node = head; node; node = node->next) {
            st.push(node);
        }
        int carry = 0;
        while (!st.empty()) {
            auto node = st.top();
            st.pop();
            node->val = node->val * 2 + carry;
            if (node->val > 9) {
                carry = 1;
            } else {
                carry = 0;
            }
            node->val %= 10;
        }
        return head;
    }
};
