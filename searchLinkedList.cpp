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
void searchll(Node *head, int x){

	int pos=1;
	Node *curr=head;
	if(curr==NULL)
	{
		return ;
	}
	while(curr != NULL)
	{
		if(curr -> data == x)
		{
			cout<<pos;
			break;	

			
		}
		else
		{	

			curr=curr -> next;
			pos++;
			
		}
	}
}

int main(){

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head -> next = temp1;
	temp1 -> next = temp2;
	searchll(head, 10);

	return 0;
}