/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sum(int arr[], int n)
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        res  = res + arr[i];
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
    cout<< sum(arr, n);

    return 0;
}
