#include <iostream>
#include <vector>

using namespace std;


//Array Representation
struct MyStack {
	int *arr;
	int cap;
	int top;
	MyStack (int c) {
		cap = c;
		arr = new int[cap];
		top = -1;
	}
	//Push
	void push(int x) {
		top++;
		arr[top] = x;
	}

	//Pop
	int pop() {
		if (top == -1)
			return -1;
		int temp = arr[top];
		top--;
		return temp;
	}
	
	//Peek
	int peek() {
		if (top == -1)
			return -1;
		return arr[top];
	}

	//Size
	int size() {
		return top+1;
	}

	//isEmpty
	bool isEmpty() {
		return (top == -1);
	}
};

//Vector Representation
struct VStack {
	vector<int> v;
	void push(int x) {
		v.push_back(x);
	}
	int pop() {
		int temp = v.back();
		v.pop_back();
		return temp;
	}
	int peek() {
		return v.back();
	}
	int size() {
		return v.size();
	}
	bool isEmpty() {
		return v.empty();
	}
};

//Linked List Representation
struct Node {
	int data;
	Node *next;
	Node (int x) {
		data = x;
		next = NULL;
	}
};

struct LLStack {
	Node *head;
	int sizeOfStack;
	LLStack() {
		head = NULL;
		sizeOfStack = 0;
	}

	//Push
	void push(int x) {
		Node *temp = new Node(x);
		temp -> next = head;
		head = temp;
		sizeOfStack++;
	}

	//POP
	int pop() {
		if (head == NULL)
			return -1;
		int res = head -> data;
		Node *temp = head;
		head = head -> next;
		delete(temp);
		sizeOfStack--;
		return res;
	}

	//Peek
	int peek() {
		return head -> data;
	}

	//Size
	int size() {
		return sizeOfStack;
	}

	//isEmpty
	bool isEmpty() {
		return (head == NULL);
	}
};

int main () {
	LLStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(500);
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<s.isEmpty()<<endl;
	s.pop();
	cout<<s.isEmpty()<<endl;
	return 0;
}