#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
void printNthNode(Node *head, int pos)
{
	if(head == NULL)
		return;
	Node *first = head;
	for(int i=0; i<pos; i++)
	{	
		if(first == NULL)
			return ;
		first = first->next;
	}
	Node *second = head;
	while(first!=NULL)
	{
		first = first->next;
		second = second->next;
	}
	cout<< second->data<<endl;

}
int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	Node *temp3 = new Node(40);
	Node *temp4 = new Node(50);
	Node *temp5 = new Node(60);
	int data = 5;
	int pos = 2;
	head -> next = temp1 ;
	temp1 -> next = temp2;
	temp2 -> next = temp3;
	temp3 -> next = temp4;
	temp4 -> next = temp5;
	
	
	printNthNode(head, pos);
}