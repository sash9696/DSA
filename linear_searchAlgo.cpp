

#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    
    for(int i=0; i<n; i++){
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
    
}


int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>> key;
    
    int index = linear_search(arr, n, key);
    if(index != -1){
        cout<< "Index is :"<<index;
    }
    else{
        cout<< "Index is not found";
    }
    
    
    return 0;
}