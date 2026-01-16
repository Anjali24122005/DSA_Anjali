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
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* dummy = new ListNode(-1);

        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;   // save next

            ListNode* prev = dummy;
            // find correct position
            while (prev->next != NULL && prev->next->val < curr->val) {
                prev = prev->next;
            }

            // insert
            curr->next = prev->next;
            prev->next = curr;

            curr = nextNode;
        }

        return dummy->next;
    }
};
