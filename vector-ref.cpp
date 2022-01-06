/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include <vector>

int main()
{
    
    vector<int> vect {10, 20, 30, 40, 50} ;
        for (auto &x : vect)
            x = x+5;
        for (auto x: vect)
            cout << x << " ";
    
    return 0;
}
