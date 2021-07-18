#include<iostream>
using namespace std;

int remDup(int arr[], int n)
{
	int res = 1;
	for(int i=1; i<n; i++)
	{
		if(arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	for(int i=0; i<res; i++)
		cout << arr[i] << " ";
	return res;
}
int main()
{
	int arr[] = {10, 20, 20, 30, 30, 30, 40,40};
	int n = 8;
	cout<< remDup(arr, n)<< endl;
	

	return 0;




}