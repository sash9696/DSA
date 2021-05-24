#include <iostream>
using namespace std;



int main()
{
       string str="geeksforgeeks";
       int res=str.find("xyz");
       if(res== string::npos)
            cout<<"Not Present \n";
       else
            cout<<"First occurence"
                <<"at Index"<<res;
          
          
        
        
    return 0;
}