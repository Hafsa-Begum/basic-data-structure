// link - https://leetcode.com/problems/min-stack/description/

class MinStack {
public:
    stack<int> ss, mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(ss.empty()){
            ss.push(val);
            mn.push(val);
            return;
        }
        ss.push(val);
        mn.push(min(mn.top(), val));
    }
    
    void pop() {
        if(ss.empty()) return;
        ss.pop();
        mn.pop();
    }
    
    int top() {
        return ss.top();
    }
    
    int getMin() {
        return mn.top();
    }
};