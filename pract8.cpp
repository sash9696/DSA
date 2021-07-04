#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}

		double product=1;
		int iVar;

		for(int i=0; i<n; i++) {
			product = product*arr[i];
		}

		cout<<product;
		iVar=product;

		if (sqrt(product) == iVar) {
			cout<<"Yes";
		}

		// if (sqrt(product) == 0) {
		// 	cout<<"No \n";
		// }
		// else {
		// 	cout<<"Yes \n";
		// }

	}

	return 0;
}