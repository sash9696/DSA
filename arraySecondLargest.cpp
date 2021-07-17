#include<iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
	int res=0;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[res])
		{
			res = i;
		}
	} 
	
	if(arr[res] > arr[n-1])
		cout<< arr[n-1] <<endl;
	else
		cout<< arr[res] <<endl;
	return 0;
		


}
int main()
{	
	int arr[]={5, 8, 20, 10, 40};
	int n = 5;
	cout<< secondLargest(arr, n)<<endl;
	return 0;
}