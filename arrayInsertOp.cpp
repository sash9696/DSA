#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n==cap)
		return n;

	for(int i=n-1; i>=pos-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos-1] = x;
	for(int i=0; i<=n ; i++)
	{
		cout<<arr[i]<<" ";

	}
	cout<<endl;
	return n+1;

}
int main()
{
	int arr[]={5, 10, 20, 0, 0};
	int n=3;
	int cap=5;
	int pos=2;
	int x=7;
	cout<<insert(arr, n, x, cap, pos );



}