class MinStack {
public:
    stack<int> st, minSt;
    
    void push(int val) {
        if(st.empty()){
            minSt.push(val);
        }
        else{
            minSt.push(min(val, minSt.top()));
        }
        st.push(val);
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */