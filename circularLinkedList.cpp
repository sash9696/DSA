#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
	Node (int x) {
		data = x;
		next = NULL;
	}
};

//For Loop Traversal
// void traversalCircularLL (Node *head) {
// 	if (head == NULL) 
// 		return;
// 	cout<<head -> data<<" ";
// 	for (Node *p=head -> next; p!=head; p=p->next) {
// 		cout<<(p -> data)<<" ";
// 	}
// }


// While Loop Traversal
void traversalCircularLL (Node *head) {
	if (head == NULL) {
		return;
	}
	Node *curr = head -> next;
	cout<<head -> data<<" ";
	while(curr != head) {
		cout<<curr->data<<" ";
		curr = curr -> next;
	}
}

// Do While Traversal
// void traversalCircularLL (Node *head) {
// 	if (head == NULL)
// 		return;
// 	Node *curr = head;
// 	do {
// 		cout<<curr -> data<<" ";
// 		curr = curr -> next;
// 	} while (curr != head);
// }

Node *insertAtBeginCLL (Node *head, int data) {
	Node *temp = new Node(data);
	if(head == NULL)
		temp = temp -> next;
	else {
		Node *curr = head -> next;
		while(curr -> next != head) {
			curr = curr -> next;
		}
		curr -> next = temp;
		temp -> next = head;
	}
	
	return temp;
}

Node *insertAtBeginCLLOptimised (Node *head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		temp = temp -> next;
		return temp;
	}
	else {
		// Inserting new node between head and (head -> next)
		temp -> next = head -> next;
		head -> next = temp;
		// Swapping value of head and temp
		int t = head -> data;
		head -> data = temp -> data;
		temp -> data = t;
		// Returning head bcoz head is not changed, only it's value is changed
		return head;
	}
}

Node *insertAtEndCLL (Node *head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		temp = temp -> next;
		return temp;
	}
	else {
		Node *curr = head -> next;
		while (curr -> next != head) {
			curr = curr -> next;
		}
		temp -> next = head;
		curr -> next = temp;
		return head;
	}
}

Node *insertAtEndCLLOptimised (Node *head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		temp = temp -> next;
		return temp;
	}
	else {
		// Adding a new node between head and (head -> next)
		temp -> next = head -> next;
		head -> next = temp;
		// Swapping the values of head and temp
		int t = head -> data;
		head -> data = temp -> data;
		temp -> data = t;
		return temp;
	}
}

Node *deleteHead (Node *head) {
	if (head == NULL)
		return NULL;
	if (head -> next == head) 
		return NULL;
	else {
		Node *temp = head -> next;
		Node *curr = head;
		while(curr -> next != head) {
			curr = curr -> next;
		} 
		delete(head);
		curr -> next = temp;
		return temp;
	}
}

Node *deleteHeadOptimised (Node *head) {
	if (head == NULL)
		return NULL;
	if (head -> next == head) {
		delete(head);
		return NULL;
	}
	else {
		head -> data = head -> next -> data;
		Node *temp = head -> next;
		head -> next = head -> next -> next;
		delete(temp);
		return head;
	}
}

Node *deleteAtK (Node *head, int pos) {
	if (head == NULL) 
		return NULL;
	// If node at position 1 is to be deleted
	else if (pos == 1) {
		head -> data = head -> next -> data;
		Node *temp = head -> next;
		head -> next = head -> next -> next;
		delete(temp);
		return head;
	}
	else {
		Node *curr = head;
		for (int i=1; i<pos-1; i++) {
			curr = curr -> next;
		}
		Node *temp = curr -> next;
		curr -> next = curr -> next -> next;
		delete(temp);
		return head;
	}
}
int main() {
	// Node *head = NULL;
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = head;

	head = deleteAtK(head, 4);

	traversalCircularLL(head);

	return 0;
}