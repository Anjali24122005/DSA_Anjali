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
    ListNode* reverse(ListNode* node){
        ListNode* curr=node;
        ListNode* prev=NULL;
        ListNode* next=NULL;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        int carry=0;

        while(l1 ||l2 || carry!=0){
            int sum=carry;

            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;
            int digit=sum%10;

            curr->next=new ListNode(digit);
            curr=curr->next;
        }
        ListNode* res=reverse(dummy->next);
        return res;
    }
};