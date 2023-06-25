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
private:
    int findLength(ListNode* head,int count=0){
        if(head==NULL){
            return count;
        }
        return findLength(head->next,count+1);
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int dist=findLength(head)-n+1;
        int count=1;
        ListNode* prev=head;
        ListNode* temp=head;
        if(dist==1){
            head=head->next;
            return head;
        }
        while(temp){
            if(count==dist){
                prev->next=temp->next;
                break;
            }
            prev=temp;
            temp=temp->next;
            count++;
        }
        return head;
    }
};