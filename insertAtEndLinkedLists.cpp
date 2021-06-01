#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;

	Node(int x){
		data=x;
		next=NULL;
	}
};

	
Node *insert(Node *head, int x)
{	
	Node *temp =  new Node(x);
	
	if(head==NULL)
	{
		return temp;
	}
	Node *curr=head;
	while(curr -> next !=NULL)
	{
		curr = curr -> next;
	}
	curr -> next = temp;
	
	return head;
}
void printList(Node *head)
{	Node *curr=head;
	if(head==NULL)
	{
		return ;
	}
	while(curr!=NULL)
	{
		cout<<curr -> data <<" ";
		curr=curr -> next;
	}
}
int main(){

	Node *head=NULL;
	head=insert(head, 10);
	head=insert(head, 20);
	head=insert(head,30);
	head=insert(head,40);
	printList(head);
	return 0;
}