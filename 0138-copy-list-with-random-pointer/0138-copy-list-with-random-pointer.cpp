class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;

        // Step 1: Copy nodes and insert them right after originals
        Node* curr = head;
        while(curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: Copy random pointers
        curr = head;
        while(curr) {
            if(curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        // Step 3: Separate the lists
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;
        curr = head;
        while(curr) {
            copyCurr->next = curr->next;
            curr->next = curr->next->next;
            curr = curr->next;
            copyCurr = copyCurr->next;
        }

        return dummy->next;
    }
};