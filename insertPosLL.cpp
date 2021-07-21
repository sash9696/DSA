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
Node *insertPos(Node *head, int data, int pos)
{	Node *temp = new Node(data);
	Node *curr = head;
	if(pos == 1)
	{
		temp -> next = head;
		return temp;
	}
	if(curr == NULL)
		return head;
	for(int i=1; i<= pos-2 && curr!=NULL; i++)
	{
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	return head;
}

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
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
	insertPos( head, data, pos);
	printlist(head);
	
	

	return 0;
}