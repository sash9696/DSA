#include <iostream>
using namespace std;
int getMax(int arr[], int n)
{
	int temp=0;
	int second=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>temp)
		{
			temp=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]>second && arr[i] < temp)
		{
			second=arr[i];
		}
		
	}
	return second;
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
	
	cout<<getMax(arr, n);
	return 0;

}