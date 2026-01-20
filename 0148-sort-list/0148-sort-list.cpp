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
    ListNode* middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;

        while(l1 && l2){
            if(l1->val<l2->val){
                tail->next=l1;
                l1=l1->next;
            }else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1!=NULL){
            tail->next=l1;
        }else{
            tail->next=l2;
        }
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        // if(!head) return head;

        // ListNode* i=head;
        // while(i){
        //     ListNode* j=i->next;
        //     while(j){
        //         if(j->val<i->val){
        //             int temp=i->val;
        //             i->val=j->val;
        //             j->val=temp;
        //         }
        //         j=j->next;
        //     }
        //     i=i->next;
        // }
        // return head;

        if(!head || !head->next) return head;

        ListNode* mid= middle(head);
        ListNode* right=mid->next;
        mid->next=NULL;

        ListNode* left=sortList(head);
        right=sortList(right);

        return merge(left, right);
    }
};