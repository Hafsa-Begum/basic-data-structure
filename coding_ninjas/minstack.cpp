// link - https://www.codingninjas.com/studio/problems/min-stack_3843991

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		stack<int> s, mn;
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(s.empty()){
				s.push(num);
				mn.push(num);
				return;
			}
			s.push(num);
			mn.push(min(mn.top(), num));
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.empty()) return -1;
			else{
				int x = s.top();
				s.pop();
				mn.pop();
				return x;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s.empty()) return -1;
			else{
				return s.top();
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(mn.empty()) return -1;
			else{
				return mn.top();
			}
		}
};