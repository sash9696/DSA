#include <iostream>

using namespace std;

int main () {
	int t;
	cin>>t;

	while (t--) {
		int n;
		cin>>n;
		int d;
		cin>>d;
		int arr[n];
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}

		while (d--) {
			int temp = arr[0];
			for (int i=0; i<n-1; i++) {
				arr[i] = arr[i+1];
			}
			arr[n-1] = temp;
		}

		for (int i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}

	}

	return 0;
}