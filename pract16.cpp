#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

struct myStack {
	int *arr;
	int top;
	int cap;
	myStack(int c) {
		cap = c;
		arr = new int[cap];
		top = -1;
	}
	void push(int val) {
		if (cap == top) {
			cout<<"Stack Overflow \n";
			return;
		}
		top++;
		arr[top] = val;
	}
	int pop() {
		if (top == -1) 
			return 
		int temp = arr[top];
		top--;
		return temp;
	}
	int size() {
		return top+1;
	}
	int peek() {
		return arr[top];
	}
	bool isEmpty() {
		return (top == -1);
	}
};

int main () {

	myStack s;
	int n;
	cin>>n;

	for (int i=0; i<n; i++) {
		s.push()
	}

	return 0;
}