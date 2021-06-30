#include <iostream> 

using namespace std;

bool isPalindrome(char array[], int size) {
	int low=0;
	int high=size-1;

	while(low<high) {
		if (array[low] == array[high]) {
			low++;
			high--;
		}
		else {
			cout<<"false hai\n";
			return false;
		}
		
	}
	cout<<"true hai\n";
	return true;


}

int main () {
	int n;
	cout<<"Enter size: \n";
	cin>>n;
	char arr[n];
	cout<<"Enter characters: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	isPalindrome(arr, n);

	return 0;
}
