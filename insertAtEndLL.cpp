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
int insert(Node *head, int x)
{	
	
	Node *temp = new Node(x);
	
	if(head  == NULL)
	{	
	   cout<< temp;
	}
	Node *curr = head;
	while(curr -> next != NULL)
	{
		curr = curr -> next;
	}
	curr -> next = temp;
	Node *curry = head;
	while (curry!= NULL)
	{
		cout<< curry -> data << " ";
		curry = curry -> next;
	}
	
	
	return 0;
}
int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	int x = 5;
	Node *temp = new Node(x);
	head -> next = temp1 ;
	temp1 -> next = temp2;
	insert(head, x);
	

	return 0;
}