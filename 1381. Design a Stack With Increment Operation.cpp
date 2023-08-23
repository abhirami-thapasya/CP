class CustomStack {
public:
    vector<int> arr;
    int top;
    int n;
    CustomStack(int maxSize) {
        top=-1;
        n=maxSize;
        arr.assign(n,0);
    }
    
    void push(int x) {
        if(top<n-1){
            arr[++top]=x;
        }
    }
    
    int pop() {
        if(top==-1){
            return -1;
        }
        return arr[top--];
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<=top;i++){
            arr[i]+=val;
        }
        return;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */