#include <iostream> 

using namespace std;

class Stack {
		
		
	public:
		Stack() {
			
		bool isEmpty() {
			if(top == -1) {
				return true;
			}
			else {
				return false;
			}
		}
		bool isFull() {
			if(top == arr[3]) {
				return true;
			}
			else {
				return false;
			}
		}
		void push(char val) {
			if (isFull()) {
				cout<<"Stack Overflow. \n";
			}
			else {
				top++;
				arr[top] = val;
			}
		}
		char pop() {
			if(isEmpty()) {
				cout<<"Stack underflow. \n";
			}
			else {
				int temp = arr[top];
				arr[top]='x';
				top--;
				return temp;
			}
		}
		void display() {
			for(int i=0; i<4; i++) {
				cout<<arr[i]<<endl;
			}
		}
	}
};

int main() {
	Stack s1;
	int option, value;
	
	do {
		cout<<"Option: \n";
		cin>>option;
		switch(option):
			case 1:
				cout<<"Enter value: \n";
				s1.push(value);
				cout<<"Value entered. \n";
				break;

			case 2:
				cout<<"Value popped "<<s1.pop()<<endl;
				break;
			case 3:
				s1.display();
				break;
	}while(option!=0);
	return 0;
}