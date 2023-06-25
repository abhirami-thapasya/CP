class MyCircularQueue {
    int* q;
    int front=0,rear=0,size=0,capacity;
public:
    MyCircularQueue(int k) {
        capacity=k;
        q=new int[k];
        // Arrays.fill(q,-1);
    }
    
    bool enQueue(int value) {
        if(!isFull()){
            if(size==0){
                q[front]=value;
                size++;
            }
            else{
                rear++;
                rear=rear % capacity;
                q[rear]=value;
                size++;
            }
            return true;
        }
        else{
            return false;
        }
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(size==1){
            q[front]=-1;
            size--;
        }
        else{
            q[front]=-1;
            front++;
            front=front%capacity;
            size--;
        }
        
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return q[rear];
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(size==capacity){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */