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
    //21. Merge Two Sorted Lists

    //Gets passed in two lists and returns merged list
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //Edge cases: if both are null, return null
        //            if one is null, return other list
        if (list1 == NULL && list2 == NULL) return NULL;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        //Recursively build merge of given lists
        //Set current node's value to larger value and recursively call w/ node after merged node
        ListNode *head = new ListNode;
        if (list1->val < list2->val) {
            head->val = list1->val;
            head->next = mergeTwoLists(list1->next, list2);
        }
        else {
            head->val = list2->val;
            head->next = mergeTwoLists(list1, list2->next);
        }

        //Returning head of merged list
        return head;

    }
};