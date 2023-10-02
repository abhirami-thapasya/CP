class MyQueue {
private:
    stack<int> s;
    stack<int> d;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(!s.empty()){
            d.push(s.top());
            s.pop();
        }
        int r=d.top();
        d.pop();
        while(!d.empty()){
            s.push(d.top());
            d.pop();
        }
        return r;
    }
    
    int peek() {
        while(!s.empty()){
            d.push(s.top());
            s.pop();
        }
        int r=d.top();
        while(!d.empty()){
            s.push(d.top());
            d.pop();
        }
        return r;
    }
    
    bool empty() {
        return s.empty();
    }
};