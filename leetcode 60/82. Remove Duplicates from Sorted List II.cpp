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
    ListNode* deleteDuplicates(ListNode* head) {
        // If the list is empty or contains only one node
        if (!head || !head->next) {
            return head;
        }
        
        // Create a dummy node and initialize the previous node as the dummy node
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;
        
        while (head) {
            // If the current node has a duplicate, move to the next non-duplicate node
            if (head->next && head->val == head->next->val) {
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                // Skip the last node with the same value
                head = head->next;
                prev->next = head;
            } else {
                prev = prev->next;
                head = head->next;
            }
        }
        
        return dummy.next;
    }
};
