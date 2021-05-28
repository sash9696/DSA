#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{	
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int temp = arr[e];
		arr[e] = arr[s];
		arr[s] = temp;
		
		s++;
		e--;
	}

	for (int j=0; j<n; j++) {
		cout<<arr[j]<<" ";
    }
    

}


int main()
{
	int n;
	cout<<"Enter Size of Array: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	reverse(arr, n);
	return 0;

}