// link - https://www.codingninjas.com/studio/problems/left-sum_920380

#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	long long int sum = 0;
	queue<BinaryTreeNode<int>*> q;
	if(root) q.push(root);
	while(!q.empty()){
		BinaryTreeNode<int> *l = q.front();
		q.pop();
		if(l->left) sum = sum + l->left->data;
		if(l->left) q.push(l->left);
		if(l->right) q.push(l->right);
	}
	return sum;
}