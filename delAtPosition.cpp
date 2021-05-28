#include <iostream>
using namespace std;


void delVal(int arr[], int n, int x)
{   
		int pos;
		for(int i=0; i<n; i++)
		{
			if(arr[i]==x)
			{
				 pos=i;
				break;
			}
		
		}
		for (int j=pos; j<n-1; j++)
		{
			arr[j]=arr[j+1];
		}
		for (int i=0;i<n-1;i++)
		{
				cout<<arr[i]<<" ";
		}
		cout<<endl;
	
	

}
int main()
{
	int n;
	cout<<"Enter size of array \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int x;
	cin>>x;
	for (int i=0;i<n;i++)
		{
				cout<<arr[i]<<" ";
		}
	cout<<endl;
	delVal(arr, n, x);


	return 0;
}

