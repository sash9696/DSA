#include <iostream>
using namespace std;

int bSearch(int arr[], int x, int low, int high)
{
	
	int mid = (high + low)/2;
	if(arr[mid] == x)
	{
		return mid;
	}
	else if(arr[mid] > x)
	{
		return bSearch(arr, x ,low, mid - 1);
	}
	else
	{
		return bSearch(arr, x, mid+1, high);
	}
}
int main()
{
	int arr[] = {10,20,30,40,50};
	int n = 5;
	int x = 50;
	int low = 0;
	int high = 4;
	cout<<bSearch(arr, x, low, high)<<endl;
	return 0;
}