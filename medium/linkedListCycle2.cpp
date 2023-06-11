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
    //142. Linked List Cycle II

    //Returns node where a cycle begins in the given linked list, or NULL if there is no cycle
    //Uses two pointer method from problem 141 to detect cycle, then finds head of cycle
    ListNode *detectCycle(ListNode *head) {
        //Using method from problem 141 to detect cycle
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            //If cycle is found, move both the head and slow pointer forward until they cross at start of cycle
            if ((fast == slow) && fast) {
                while (head != slow) {
                    head = head->next;
                    slow = slow->next;
                }
                //Returning head of cycle in list
                return head;
            }
        }
        //Returning NULL if no cycle is present
        return NULL;

    }
};