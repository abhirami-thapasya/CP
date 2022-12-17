Node* kReverse(Node* head, int k) {
    if(head==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* nxt=NULL;
    int count=1;
    while(curr!=NULL && count<=k){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        count++;
    }
    if(nxt!=NULL){
        head->next=kReverse(nxt,k);
    }
    return prev;
}