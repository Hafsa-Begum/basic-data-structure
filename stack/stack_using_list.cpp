#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool isEmpty(){
        if(l.size() == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st;
    int i=0, n;
    cin>>n;
    while (i<n)
    {
        int x; cin>>x;
        st.push(x);
        i++;
    }
    
    while (!st.isEmpty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}

// time-complexity- O(1) for all operations like push, pop, top, size, isEmpty 