LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* nxt=NULL;
    
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}