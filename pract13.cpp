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

void searchList (Node *head, int key) {
	int i = 0;
	bool found = false;
	while(head != NULL){
		i++;
		if ((head -> data) == key) {
			cout<<"Found at position:  "<<i<<endl;
			found = true;
		}
		head = head -> next;
	}
	if (!found) {
		cout<<"Not Found \n";
	}
}

int recursiveLinkedListSearch (Node *head, int key) {
	if (head == NULL) 
		return -1;
	else if((head -> data) == key) {
		return 1;
	}
	else {
		int result = recursiveLinkedListSearch(head -> next, key);
		if (result == -1)
			return -1;
		else 
			return (result+1);
	}
	
}

Node *insertAtBeginning (Node *head, int x) {
	Node *temp = new Node(x);
	temp -> next = head;
	return temp;
}

Node *insertAtEnd (Node *head, int x) {
	Node *temp = new Node(x);
	if (head==NULL) {
		return head;
	}
	Node *curr = head;
	while(head != NULL) {
		curr = curr -> next;
	}
	curr -> next = temp;
	return head;
}

Node *deleteAtBegin (Node *head) {
	Node *temp = head -> next;
	delete(head);
	return temp;
}

Node *insertAtAnyPosition (Node *head, int data, int pos) {
	Node *temp = new Node(data);
	if (pos == 1) {
		temp -> next = head;
		return temp;
	}
	Node *curr = head;
	for (int i=0; i<pos-1 && curr!=NULL; i++) {
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	cout<<"Added \n";
	return head;
}

Node *sortedInsert (Node *head, int val) {
	Node *temp = new Node(val);
	if (head == NULL) {
		head = temp;
		return head;
	}
	if (val < head -> data) {
		temp -> next = head;
		return temp;
	}
	Node *curr = head;
	while((curr -> next -> data < val) && (curr -> next != NULL)) {
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	cout<<"Inserted \n";
	return head;
}

int main() {
	// Node *head = new Node(995);
	// head -> next = new Node(996);
	// head -> next -> next = new Node(997);
	// head -> next -> next -> next = new Node(998);
	// head -> next -> next -> next -> next = new Node(999);

	// int key = 99;
	// cout<<recursiveLinkedListSearch(head, key);

	Node *head = NULL;
	head = insertAtBeginning(head, 10);
	cout<<head<<endl;
	head = insertAtBeginning(head, 20);
	cout<<head<<endl;
	head = insertAtBeginning(head, 30);
	cout<<head<<endl;

	// head = deleteAtBegin(head);
	// cout<<head<<endl;
	// head = deleteAtBegin(head);
	// cout<<head<<endl;
	// head = deleteAtBegin(head);
	// cout<<head<<endl;

	head = sortedInsert(head, 25);
	cout<<"ADDED: "<<head<<endl;



	return 0;
}