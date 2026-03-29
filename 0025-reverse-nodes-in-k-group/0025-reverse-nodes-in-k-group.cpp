class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        // Step 1: check if k nodes exist
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }

        // Step 2: if k nodes exist, reverse them
        if (count == k) {
            curr = reverseKGroup(curr, k); // recursion for next part

            while (count--) {
                ListNode* temp = head->next;
                head->next = curr;
                curr = head;
                head = temp;
            }
            head = curr;
        }

        return head;
    }
};