#include<iostream>
using namespace std;

int findElementAtIndex(int a[], int n, int key) 
    {
        if(key >= 0 && key <=n-1)
        	return a[key];


        return 0;

    }

int main()
{
	int arr[] = {1,2,4};
	int n = 3;
	int key = 3;
	cout<< findElementAtIndex(arr, n, key)<<" ";
}