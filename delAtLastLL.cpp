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
Node *delTail(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete (curr->next);
    curr->next=NULL;
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
	
	head -> next = temp1 ;
	temp1 -> next = temp2;
	printlist(head);
	head=delTail(head);
	printlist(head);
	

	return 0;
}