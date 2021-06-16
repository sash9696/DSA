#include <iostream>
#include <math.h>

using namespace std;

// Time Complexity - O(N)
int countDigit(int n) {
	int count = 0;
	while(n>0) {
		n = n/10;
		count++;
	}
	return count;
}
int countDigitOptimised(int n) {
	int temp = log10(n) + 1;
	return temp;
}

bool palindromeNumber(int n) {
	int reverse = 0;
	int digit = 0;
	while(n > 0) {
		reverse = reverse * 10;
		digit = n % 10;
		reverse = reverse + digit;
		n = n / 10;
	}
	if (reverse === n) {
		return true;
	}
	return false;

}

int main() {
	int n;
	cin>>n;
	cout<<countDigit(n);
	// cout<<countDigitOptimised(n);
	return 0;
}