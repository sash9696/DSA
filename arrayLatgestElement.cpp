#include<iostream>
using namespace std;

int largeElement(int arr[], int n)
{
	int res=0;
	for(int i=0; i<=n; i++)
	{
		if(arr[i]>arr[res])
		{
			res = i;
		}
	} 
	cout<<arr[res]<<endl;
	return res;


}
int main()
{	
	int arr[]={5, 8, 20, 10};
	int n = 4;
	cout<< largeElement(arr, n)<<endl;
	return 0;
}