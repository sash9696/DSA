/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "Enter any number n:";
    cin>> n;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=10 ; j++)
        {
            cout<< i*j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
