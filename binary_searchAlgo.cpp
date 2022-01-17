

#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    
    int start = 0;
    int end = n-1;
    
    while(start <= end){  // time complexity log(n)
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        
        else if(mid > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
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