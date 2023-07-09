link - https://www.codingninjas.com/studio/problems/kevin-s-stack-problem_1169465

#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char> st;

	for(char c:s){
		st.push(c);
	}

	string newS;

	while(!st.empty()){
		// revSt.push(st.top());
		newS.push_back(st.top());
		st.pop();
	}
	return newS;
}
