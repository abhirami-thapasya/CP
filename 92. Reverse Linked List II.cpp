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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        if(temp==NULL || temp->next==NULL || left==right){
            return head;
        }
        ListNode* lt;
        ListNode* rt;
        ListNode* prev=NULL;
        ListNode* lt_prev=NULL;
        int count=0;
        while(count<right){
            count++;
            if(left==count){
                lt=temp;
                lt_prev=prev;
            }
            if(right==count){
                rt=temp;
            }
            prev=temp;
            temp=temp->next;
        }
        ListNode* curr=lt->next;
        ListNode* fwd;
        prev=lt;
        while(curr!=temp){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        if(lt_prev==NULL){
            head=rt;
        }
        else{
            lt_prev->next=rt;
        }
        lt->next=temp;
        return head;
    }
};