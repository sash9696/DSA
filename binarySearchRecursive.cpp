#include <iostream>
using namespace std;


int search(int arr[], int n, int low, int high, int x)
{
	low=0;
	high=n-1;
	
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return search(arr, n, low, mid-1, x);
	else (arr[mid]<x);
		return search(arr, n, mid+1, high, x);

}


int main(){
	
	int n;
	cout<<"Enter Size of Array: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int x;
	cout<<"Enter value you want to search: \n";
	cin>>x;
	int low=0;
	int high=n-1;
	cout<<search(arr, n, low, high, x);
	return 0;
}