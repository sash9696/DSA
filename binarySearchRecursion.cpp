#include <iostream>

using namespace std;

int binarySearch (int arr[], int n, int x, int low, int high) {
	int mid = (low + high)/2;
	if (low>high) {
		return -1;
	}
	else if (x==mid) {
		return mid+1;
	}
	else if (x<mid) {
		return binarySearch(arr, n, x, low, mid-1);
	}
	else {
		return binarySearch(arr, n, x, mid+1, high);
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Enter element to search: \n";
	int x;
	cin>>x;
	int low=0;
	int high=n-1;
	cout<<binarySearch(arr, n, x, low, high);
	return 0;
}