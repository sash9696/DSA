#include <iostream>

using namespace std;

int insertInArray(int arr[], int n, int val, int pos, int cap) {
	if(n==cap) 
		return -1;
	int index = pos - 1;
	for (int i=n-1; i>=index; i--) {
		arr[i+1]=arr[i];
	}
	arr[index] = val;
	
	for (int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}


int main() {
	int n=5;
	int arr[5] = {1,2,3};

	int value;
	cout<<"Enter the value you want to enter: \n";
	cin>>value;

	int position;
	cout<<"Enter the position in which you want to enter: \n";
	cin>>position;

	int capacity=2;



	cout<<insertInArray(arr, n, value, position, capacity);

	return 0;
}