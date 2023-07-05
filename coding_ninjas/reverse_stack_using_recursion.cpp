// link - https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875

void reverseStack(stack<int> &st) {
    // Write your code here
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    reverseStack(st);

    stack<int> cp;

    while(!st.empty()){
        cp.push(st.top());
        st.pop();
    }
    cp.push(x);

    while(!cp.empty()){
        st.push(cp.top());
        cp.pop();
    }
}