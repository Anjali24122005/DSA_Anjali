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
    ListNode* partition(ListNode* head, int x) {
        ListNode* d1head=new ListNode(-1);
        ListNode* d1=d1head;
        ListNode* d2head=new ListNode(-1);
        ListNode* d2=d2head;
        ListNode* temp=head;
        while(temp ){
            if(temp->val<x){
                d1->next=temp;
                temp=temp->next;
                d1=d1->next;
            }else{
                d2->next=temp;
                temp=temp->next;
                d2=d2->next;
            }
        }
        d2->next=NULL;
        d1->next=d2head->next;
        return d1head->next;
    }
};