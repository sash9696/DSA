

#include<iostream>
using namespace std;

void printSubArrays(int arr[], int n){
    
    for(int i=0 ; i< n; i++){
        for(int j = i; j<n; j++){
            
            for(int k = i; k<=j; k++){
                cout<< arr[k] ;
                
            }
            cout<< endl;
        }
        cout<< endl;
        
    }
    
    
}

int main(){
    
    int arr[] = {1,2,3,4};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    
    printSubArrays(arr, n);
    
    
    return 0;
}