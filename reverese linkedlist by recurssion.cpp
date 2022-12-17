void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* curr,LinkedListNode<int>* prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int>* nxt=curr->next;
    reverse(head,nxt,curr);
    curr->next=prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    reverse(head,curr,prev);
    return head;
}