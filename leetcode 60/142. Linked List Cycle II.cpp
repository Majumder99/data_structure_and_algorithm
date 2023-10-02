class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        if (!head) return NULL;

        ListNode *slow = head, *fast = head;
        
        // Check if cycle exists
        bool cycle = false;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                cycle = true;
                break;
            }
        }

        if (!cycle) return NULL;

        // Find the start node of the cycle
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;  // This is the start of the cycle
    }
};
