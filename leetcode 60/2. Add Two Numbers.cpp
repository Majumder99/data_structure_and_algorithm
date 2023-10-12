class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(); // Dummy head to simplify code
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 || l2) {
            int x = (l1) ? l1->val : 0;
            int y = (l2) ? l2->val : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            sum %= 10;

            current->next = new ListNode(sum);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return dummyHead->next;
    }
};
