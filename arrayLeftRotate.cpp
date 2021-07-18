#include<iostream>
using namespace std;

int leftRotate(int arr[], int n)
{
	int res;
	res = arr[0];
	for(int i=0; i<n; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n-1] = res;
	for(int i = 0; i<n; i++)
		cout<< arr[i] << " " ;
	cout << endl;
	return 0;
}
int main()
{
	int arr[] = {30, 5, 20};
	int n = 3;
	cout << leftRotate(arr, n) << " " ;
}