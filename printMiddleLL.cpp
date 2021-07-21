#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
int printMid(Node *head)
{
	if(head == NULL)
		return 0;

	Node *slow = head; 
	Node *fast = head;
	while(fast != NULL && fast -> next !=NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	cout<< slow -> data << endl;
	return 0;
}
int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	int data = 5;
	int pos = 2;
	head -> next = temp1 ;
	temp1 -> next = temp2;
	
	printMid(head);
	
	

	return 0;
}