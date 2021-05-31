#include <iostream>
using namespace std;

struct Node {

	int data;
	Node *next;

	Node(int x){
		data=x;
		next=NULL;
	}
};
Node* insert(Node *head, int y){

	Node *temp3 = new Node(y);
	temp3 -> next = head;
	
	return temp3;


}
void printList(Node *head){
	Node *curr =  head;
	if(curr==NULL){
		return;
	}
	else(curr!=NULL);
	{	
		cout<< curr -> data <<" ";
		printList(curr -> next);

	}
}	

int main(){

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head -> next = temp1;
	temp1 -> next = temp2;
	head=insert(head, 5);
	printList(head);

	return 0;
}