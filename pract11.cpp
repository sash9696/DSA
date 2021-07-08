#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		if( (floor(sqrt(n/2)) == sqrt(n/2)) || (floor(sqrt(n/4)) == sqrt(n/4)) ) {
			cout<<"YES \n";
		}
		else {
			cout<<"NO \n";
		}
	}

	return 0;
}