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
	 
	 return arr[res];


}
int main()
{	
	int arr[]={1,1,};
	int n = 2;
	cout<< largeElement(arr, n)<<endl;
	return 0;
}