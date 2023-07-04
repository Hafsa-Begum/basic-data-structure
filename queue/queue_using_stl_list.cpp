#include <bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    list<int> l;

    void push(int v){
        l.push_back(v);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int size(){
        return l.size();
    }

    bool isEmpty(){
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        q.push(x);
    }

    while(!q.isEmpty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}