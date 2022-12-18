Node *removeLoop(Node *head)
{
    if(head==NULL){
        return head;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        Node* temp=fast->next;
        fast=temp->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }
    if(fast==NULL || fast->next==NULL){
        return head;
    }
    Node* prev=slow;
    int len=1;
    while(prev->next!=slow){
        prev=prev->next;
        len++;
    }
    Node* num=head;
    while(num!=NULL && num->next!=NULL){
        if(num==slow){
            break;
        }
        num=num->next;
        //prev=slow;
        prev=slow;
        slow=slow->next;

    }
    prev->next=NULL;
    return head;
}