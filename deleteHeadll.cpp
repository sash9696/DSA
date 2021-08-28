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
Node *deleteH(Node *head)
{
	if(head == NULL)
		return NULL;
	else
	{
		Node *temp = head -> next;
		delete head;
		return temp;
	}
	

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
	
	head -> next = temp1 ;
	temp1 -> next = temp2;
	head=deleteH(head);
	printlist(head);
	

	return 0;
}