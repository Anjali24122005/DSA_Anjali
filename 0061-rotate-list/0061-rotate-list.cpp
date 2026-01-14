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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* temp=head;
        int length=1;
        while(temp->next!=NULL){
            temp=temp->next;
            length++;
        }

        k=k%length;
        if(k==0) return head;

        ListNode* curr=head;
        for(int i=1;i<length-k;i++){
            curr=curr->next;
        }

        ListNode* newhead=curr->next;
        curr->next=NULL;
        temp->next=head;

        return newhead;
    }
};