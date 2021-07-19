#include<iostream>
using namespace std;

int largest(int arr[], int n) 
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
    	if(arr[i] > arr[res])
    	{
    		res = i ;
    	}
    }
    int temp = arr[res];
    return temp;
}
int main()
{
	int arr[] = 
}