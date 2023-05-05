class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* fwd;
        
        if(curr==NULL || fwd==NULL){
            return head;
        }

        while(curr!=NULL){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
};