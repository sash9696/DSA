#include <iostream>
using namespace std;

void leftRotate(int arr[] , int n)
{	int temp=arr[0];
	for(int i=0;i<n ;i++)
	{
		arr[i]=arr[i+1];

	}
	arr[n-1]=temp;
	for (int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}

	

}

int main()
{
	int n;
	cout<<"Enter Size of Array: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	leftRotate(arr, n);
	return 0;
}
	