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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int cnt=0;
        // ListNode* temp=head;

        // while(temp!=NULL){
        //     cnt++;
        //     temp=temp->next;
        // }
        // if(cnt==n) return head->next;
        // temp=head;
        // for(int i=0;i<cnt-n-1;i++){
        //     temp=temp->next;
        // }
        // temp->next=temp->next->next;

        // return head;

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;

        for(int i=0;i<=n;i++){
            if(fast==NULL) return NULL;
            fast=fast->next;
        }

        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;

        return dummy->next;

    }
};