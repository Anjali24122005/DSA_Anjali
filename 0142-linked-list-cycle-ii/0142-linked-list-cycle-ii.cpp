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
    ListNode *detectCycle(ListNode *head) {
        // ListNode* temp=head;
        // unordered_set<ListNode*> v;
        // while(temp!=NULL){
        //     if(v.find(temp)!=v.end()){
        //         return temp;
        //     }
        //     v.insert(temp);
        //     temp=temp->next;
        // }
        // return NULL;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                ListNode* entry=head;
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;

    }
};