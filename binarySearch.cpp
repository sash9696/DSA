#include <iostream>
using namespace std;


void search(int arr[], int n, int x)
{
	
	int start=0;
	int end=n-1;
	
	while(start <= end)
	{	int mid=(start + end)/2;
		if(arr[mid]==x)
		{
			cout<<"Your value is in index: \n";
			cout<<mid<<endl;
		}
		else if(arr[mid]>x)
		{
			end=mid-1;
		}
		else(arr[mid]<x);
		{
			start=mid+1;
		}
	}
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
	search(arr, n, x);
	return 0;
}