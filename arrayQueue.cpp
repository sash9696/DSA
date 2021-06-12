#include <iostream>
using namespace std;

struct myQueue{
	int size, cap;
	int *arr;

	myQueue(int c){
		cap=c;
		size=0;
		arr = new int[c];
	}
	bool isEmpty()
	{
		return (size==0);
	}
	bool isFull()
	{
		return (size==cap);
	}
	int enqueue(int x)
	{
		if(isFull())
			return -1;
		else {
			arr[size]=x;
			size++;
		}
		return x;
	}
	void deque()
	{
		if(isEmpty())
			return;
		else {
			
			for(int i=0; i<size; i++)
			{
				arr[i]=arr[i+1];
				size--;
			}
		}
	}
	int getFront()
	{
		return arr[0];
	}
	int getRear()
	{
		return arr[size-1];
	}
	int sizes()
	{
		return size;
	}
};

int main()
{	

	myQueue q(5);
	cout<<q.enqueue(10)<<" ";
	cout<<q.enqueue(20)<<" ";
	cout<<q.enqueue(30)<<" ";
	q.deque();
	cout<<"Front: "<<q.getFront()<<" ";
	cout<<"Rear: "<<q.getRear()<<" ";
	cout<<q.isEmpty()<<" ";
	cout<<q.isFull();
	return 0;
}