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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *temp = head;
        if (head == NULL)
        {
            return head;
        }
        else
        {
            ListNode *cur;
            ListNode *prev = NULL;
            while (head != NULL)
            {
                cur = head;
                head = head->next;
                cur->next = prev;
                prev = cur;
            }
            return prev;
        }
    }
};