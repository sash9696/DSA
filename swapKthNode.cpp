#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int data;
	Node *next;

	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printLL(Node *head) {
	if(head == NULL) return;
	Node *curr = head;
	while(curr != NULL) {
		cout<<curr -> data<<" ";
		curr = curr -> next;
	}
	cout<<"\n";
}

Node *swapKthNode(Node *head, int k) {
	Node *curr1 = head;
	Node *curr2 = head;
	Node *curr3 = head;

	int count = 0;
	
	while(curr1 != NULL) {
		count++;
		curr1 = curr1 -> next;
	}

	for (int i=0; i<k-1; i++) {
		curr2 = curr2 -> next;
	}

	int temp = curr2 -> data;

	for (int i=0; i<count-k; i++) {
		curr3 = curr3 -> next;
	}

	curr2 -> data = curr3 -> data;
	curr3 -> data = temp;

	return head;


}

Node *swapKthNodeOptimised(Node *head, int k) {
	Node *ptr1 = head;
	Node *ptr2 = head;
	Node *kth = NULL;

	while(--k) {
		ptr1 = ptr1 -> next;
	}

	kth = ptr1;
	ptr1 = ptr1 -> next;

	while(ptr1) {
		ptr2 = ptr2 -> next;
	}
	swap(ptr2 -> data, kth -> data);
	return head;
}


int main() {
	Node *head = new Node(7);
	head -> next = new Node(9);
	head -> next -> next = new Node(6);
	head -> next -> next -> next = new Node(6);
	head -> next -> next -> next -> next = new Node(7);
	head -> next -> next -> next -> next -> next = new Node(8);
	head -> next -> next -> next -> next -> next -> next = new Node(3);
	head -> next -> next -> next -> next -> next -> next -> next = new Node(0);
	head -> next -> next -> next -> next -> next -> next -> next -> next = new Node(9);
	head -> next -> next -> next -> next -> next -> next -> next -> next -> next = new Node(5);

	// Node *head2 = new Node(1000000);
	// head2 -> next = new Node(1000001);
	// head2 -> next -> next = new Node(1000002);
	// head2 -> next -> next -> next = new Node(400);
	// head2 -> next -> next -> next -> next = new Node(500);

	// printLL(head);
	// printLL(head2);

	// head = merge(head, head2, 3, 4);
	// printLL(head);

	head = swapKthNodeOptimised(head, 5);
	printLL(head);

	return 0;
}