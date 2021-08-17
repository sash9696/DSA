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

void print (Node *head) {
	Node *curr = head;
	while(curr != NULL) {
		cout<<curr -> data<<" ";
		curr = curr -> next;
	}
}

Node *rotateLinkedList(Node *head, int k) {
	if (head == NULL)
		return NULL;
	if (head -> next == NULL)
		return head;

	while(k--) {
		Node *temp = head;
		Node *curr = head -> next;
		head = head -> next;
		while (curr -> next != NULL) {
			curr = curr -> next;
		}
		curr -> next = temp;
		temp -> next = NULL;
	}

	return head;

}

Node *rr(Node *head, int k) {
	if (head == NULL)
		return NULL;
	if (head -> next == NULL)
		return head;

	while(k--) {
		Node *curr = head -> next;
		while (curr -> next != temp) {
			curr = curr -> next;
		}
		Node *temp = curr -> next;
		curr -> next = NULL;
		temp -> next = head;
		head = temp;
	}
	return head;
}  

int main () {
	Node *head = new Node(2);
	head -> next = new Node(4);
	head -> next -> next = new Node(7);
	head -> next -> next -> next = new Node(8);
	head -> next -> next -> next -> next = new Node(9);

	head = rr(head, 3);

	print(head);

	return 0;
}