/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast_runner = head;
        while(fast_runner && fast_runner->next){
            head = head->next;
            fast_runner = fast_runner->next->next;
            if(head == fast_runner){
                return true;
            }
        }
        return false;
    }
};