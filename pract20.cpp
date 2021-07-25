#include <iostream>

using namespace std;

int printNumbers(int n) {
	if (n == 0) {
		return 0;
	}
	return n+printNumbers(n-1);
}

int main() {
	int n;
	cin>>n;
	cout<<printNumbers(n);
	return 0;
}