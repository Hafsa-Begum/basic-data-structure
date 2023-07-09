// link - https://www.codingninjas.com/studio/problems/reverse-first-k-elements-of-queue_982771

#include <bits/stdc++.h> 

queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> s;
    queue<int> newQ;

    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        newQ.push(s.top());
        s.pop();
    }

    while(!q.empty()){
        newQ.push(q.front());
        q.pop();
    }

    return newQ;
}