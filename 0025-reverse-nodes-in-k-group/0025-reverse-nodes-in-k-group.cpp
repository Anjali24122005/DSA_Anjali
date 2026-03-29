// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* curr = head;
//         int count = 0;

//         // Step 1: check if k nodes exist
//         while (curr != NULL && count < k) {//1 2 3 4 5
//             curr = curr->next;
//             count++;//1//2
//         }

//         // Step 2: if k nodes exist, reverse them
//         if (count == k) {
//             curr = reverseKGroup(curr, k); // recursion for next part

//             while (count--) {
//                 ListNode* temp = head->next;
//                 head->next = curr;
//                 curr = head;
//                 head = temp;
//             }
//             head = curr;
//         }

//         return head;
//     }
// };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroup = dummy;

        while (true) {
            // Step 1: find kth node
            ListNode* kth = prevGroup;
            for (int i = 0; i < k && kth != NULL; i++) {
                kth = kth->next;
            }

            if (kth == NULL) break;

            // Step 2: mark next group
            ListNode* nextGroup = kth->next;

            // Step 3: reverse current group
            ListNode* prev = nextGroup;
            ListNode* curr = prevGroup->next;

            while (curr != nextGroup) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Step 4: connect
            ListNode* temp = prevGroup->next; // new end of group
            prevGroup->next = kth;
            prevGroup = temp;
        }

        return dummy->next;
    }
};