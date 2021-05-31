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
int searchll(Node *head, int x){

	if(head==NULL)
		return -1;

	if(head->data==x)
		return 1;
	else
	{
		int pos= searchll(head->next,x);
		if(pos==-1)
			return -1;
		else
			return(pos+1);
	}
}

int main(){

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head -> next = temp1;
	temp1 -> next = temp2;
	cout<<searchll(head, 20);

	return 0;
}