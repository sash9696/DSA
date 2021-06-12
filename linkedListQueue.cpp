#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;

	Node(int d){
		data=d;
		next=NULL;
	}
};
 struct myQueue{
 	Node *front, *rear;
 	int size;
 	myQueue(){
 		front = NULL;
 		rear = NULL;
 		size = 0;

 	}
 	void enqueue(int x){
 		Node *temp = new Node(x);
 		if(rear == NULL)
 		{
 			front = rear = temp;
 		}
 		 rear -> next = temp;
 		rear = temp;
 		size++;
 		
 	}
 	void deque(){
 		if (front == NULL)
 		{
 			return ;
 		}
 		Node *temp = front;
 		front = front -> next;
 		if (front == NULL)
 		{
 			rear = NULL;
 			
 		}
 		delete(temp);
 		

 	}	
 };
int main()
{	

	myQueue q;
	q.enqueue(10);
	q.enqueue(20);
	q.deque();
	q.deque();
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.deque();
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
	
	
	return 0;
}