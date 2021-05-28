#include <iostream>

using namespace std;

void insertAtPosition(int arr[], int n, int cap, int val, int pos) {
	if (n == cap) {
		cout<<"Array is already full \n";
		return;
	}
	else {
		for (int i=n; i>=pos; i--) {
			arr[i+1] = arr[i];
		}
		arr[pos] = val;
		for (int j=0; j<cap; j++) {
			cout<<arr[j]<<" ";
		}
	}

}

int main() {
	int n;
	cout<<"Enter Size of Array: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int cap;
	cout<<"Enter Capacity: \n";
	cin>>cap;
	int val;
	cout<<"Enter Value: \n";
	cin>>val;
	int pos;
	cout<<"Enter Position: \n";
	cin>>pos;

	insertAtPosition(arr, n, cap, val, pos);

	return 0;
}