/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int maxElement(int arr[], int n)
{
    int res = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
   
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<< maxElement(arr, n);

    return 0;
}
