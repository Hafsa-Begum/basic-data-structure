// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

// Sample Input
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50

// Sample Output
// NO

// Sample Input
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40

// Sample Output
// NO

// Sample Input
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10

// Sample Output
// YES

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin>>n;

    while(n--){
        int x; cin>>x;
        st.push(x);
    }

    int m;
    cin>>m;

    while(m--){
        int x; cin>>x;
        q.push(x);
    }
    bool flag = true;
    if(n!=m){
        flag = false;
    }
    else{
        while(!st.empty()){
            if(st.top() != q.front()){
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

