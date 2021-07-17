#include<iostream>
using namespace std;

int linearSort(int arr[], int n)
{	 
	if(n == 1)
	{
		return true;
	}

	if(arr[0] > arr[1])
	{
		return false;
	}

	for(int i = 0; i<n; i++)
	{
		if(arr[i] < arr[i-1])
			return false;

		
	}
	return true;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = 5;
	cout<<  linearSort(arr, n);
	return 0;
	
}