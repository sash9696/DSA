/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int countDistinct(int arr[], int n )
{
    int count = 1;
    bool isDistinct = true;
    
    for(int i= 1; i<n; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[j] == arr[i])
            {
                isDistinct=false;
                break;
            }
            
        }
        count ++;
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    cout<< countDistinct(arr, n)<< " ";

    return 0;
}
