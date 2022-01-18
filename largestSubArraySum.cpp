
// brute force method
#include<iostream>
using namespace std;


void sumLargestSubArray(int arr[], int n){
    int largestSum = 0;
    for(int i=0; i<n; i++){
        for(int j =i; j<n; j++){
            int subArraySum = 0;
            for(int k=i; k<=j; k++){
                // check sum of each subArray
                subArraySum = subArraySum + arr[k];
                
            }
            // logic to check if the subArray sum is the largestSum
            if(largestSum < subArraySum){
                largestSum = subArraySum;
            }
            //largestSum = max(largestSum, subArraySum);

            
        }
    }
    cout<< largestSum;
}

int main(){
    
    int arr[] = {1,2,3,4};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    
    sumLargestSubArray(arr, n);
    
    
    return 0;
}