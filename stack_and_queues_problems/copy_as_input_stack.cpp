// Question: Take a stack of size N as input and copy those elements to another stack
// to get the values in the order they were inserted and print them. 
// You should use STL to solve this problem.


// Sample Input
// 5
// 10 20 30 40 50
// Sample Output
// 10 20 30 40 50

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> stCpy;
    int n; cin>>n;

    while(n--){
        int x; cin>>x;
        st.push(x);
    }

    while(!st.empty()){
        stCpy.push(st.top());
        st.pop();
    }

    // while(!stCpy.empty()){
    //     st.push(stCpy.top());
    //     stCpy.pop();
    // }

    while(!stCpy.empty()){
        cout<<stCpy.top()<<" ";
        stCpy.pop();
    }
    return 0;
}