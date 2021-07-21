#include<iostream>
using namespace std;

int countZeroes(int arr[], int n) {
    // code here
    int res = 0;
    for(int i=0; i<n; i++)
    {  if(arr[i]>=0 && arr[i]<=1)
    	{
    		if(arr[i] == 0 )
    		res ++;
    	}
    	
    	
    }
    return res;
    
}

int main()
{
	int arr[] = {1,1,1,1,0};
	int n = 10;
	cout<<countZeroes(arr, n);
}