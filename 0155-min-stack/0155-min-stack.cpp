class MinStack {
public:
       stack<int> s,s2;
        int min;
        int prevmin;
    MinStack() {
      
    }
    
    void push(int value) {
        
        if(s.empty()) {
            s.push(value);
            s2.push(value);
            prevmin = value;
            min = value;
        }
        else {
          
          if(s2.top() >= value) {
             s.push(value);
            s2.push(value);
          }
          else {
            s.push(value);
          }
         
        }
    }
    
    void pop() {
        if(s.top() == s2.top()) {
            s.pop();
            s2.pop();
        }
        else {
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
      return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */