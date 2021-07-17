#include<iostream>
using namespace std;

int reverseArray( int arr[], int n)
{   
	int i=0;  int high=n-1;
	while(i < n-1)
	
	{	
		int res = arr[i];
		arr[i] = arr[high];
		arr[high] = res;
		i++;
		high--;
	}
	for(int j=0; j<n; j++)
	{
		cout<< arr[j] << " ";
	}
	return 0;

}
int main()
{
	int arr[] = {1,2,3,4,5,6};
	int n=6;
	cout<< reverseArray(arr, n);
	return 0;

}