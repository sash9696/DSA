#include<iostream>
using namespace std;
int sum(int arr[], int n) {
	    int res = 0;
	   for(int i=0; i<n; i++)
	   {
	   		res = res + arr[i];
	   }
	   return res;
	}

int main()
{
	int arr[] = {1,2,4};
	int n = 3;
	cout<< sum(arr, n)<<" ";
}