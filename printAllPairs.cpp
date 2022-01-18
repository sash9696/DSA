

#include<iostream>
using namespace std;

void printAllPairs(int arr[], int n){
    
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            cout <<  x << "," <<y << endl; 
            
        }
        cout<<endl;
        
    }
}

int main(){
    
    int arr[] = {1,2,3,4};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    
    printAllPairs(arr, n);
    
    
    return 0;
}