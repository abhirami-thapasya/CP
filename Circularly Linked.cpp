
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        Node* temp=fast->next;
        fast=temp->next;
        slow=slow->next;
        if(fast==slow){
            if(fast==head || fast->next==head){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}