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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* dummy=new ListNode(-1);
        ListNode* dhead=dummy;
        int sum=0;
        while(temp){
            if(temp->val==0){
                dummy->next=new ListNode(sum);
                dummy=dummy->next;
                sum=0;
                temp=temp->next;
            }else{
                sum+=temp->val;
                temp=temp->next;
            }
        }
        return dhead->next;
    }
};