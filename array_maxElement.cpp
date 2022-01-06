/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = arr[0] ;
    for (int i=0; i<n; i++)
    {
        res = max(res, arr[i]);
        
    }
    cout << res ;
    
    return 0;
}
