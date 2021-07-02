#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin>>n;

	int arr[n];

	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int product=1;

	for (int i=0; i<n; i++) {
		if (arr[i]==0) {
			return product=0;
		}
		else {
			product *= arr[i];
		}
	}
	if (product<0) {
		return -1;
	}
	else {
		return 1;
	}


	return 0;
}