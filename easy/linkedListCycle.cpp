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
    //141. Linked List Cycle

    //returns boolean representing if the given linked list contains a cycle
    //uses a two pointer method to determine if there is a cycle
    bool hasCycle(ListNode *head) {
        //fast node moves two forward each step, slow moves one forward each step
        ListNode* fast = head;
        ListNode* slow = head;
        //If fast and slow ever equal, there must be a cycle, so return true
        //else if fast ever becomes null, end of list is reached, so return false
        while (fast != NULL && fast -> next != NULL)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
            if (fast == slow)
                return true;
        }
        return false;
    }
};