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
    ListNode* headptr;
public:
    Solution(ListNode* head) {
        headptr=head;

    }
    
    int getRandom() {
        int res=headptr->val;
        ListNode* curr=headptr->next;
        int cnt=2;
        while(curr!=NULL){
            if(rand() %cnt==0){
                res=curr->val;
            }
            curr=curr->next;
            cnt++;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */