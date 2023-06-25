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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* fast=head;
        ListNode* prev=NULL;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode* mid=NULL;
        ListNode* back=NULL;
        ListNode* front=slow;
        while(front){
            back=mid;
            mid=front;
            front=front->next;
            mid->next=back;
        }
        ListNode* next_f=NULL;
        ListNode* next_m=NULL;
        ListNode* beg=head;
        while(beg){
            next_f=beg->next;
            beg->next=mid;
            beg=next_f;
            next_m=mid->next;
            if(beg==NULL){
                break;
            }
            mid->next=beg;
            mid=next_m;
        }
    }
};