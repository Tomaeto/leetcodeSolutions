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
    //206. Reverse Linked List
    
    //For a given linked list, returns reverse of list
    ListNode* reverseList(ListNode* head) {
        //Initialize nodes for current node, previous node, and next node
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        //While the current node is not NULL:
        //  Set next to the next node (store next node)
        //  Set node linked to current to the previous node (reverse current spot in list)
        //  Set the previous node to the current
        //  Set current node to the next
        while (curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        //After, previous is the head of the list, so return previous
        return prev;
    }
};