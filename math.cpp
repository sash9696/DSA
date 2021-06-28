#include <iostream>
#include <math.h>

using namespace std;

bool palindromeNumber(int n) {
	int reverse = 0;
	int digit = 0;
	while(n > 0) {
		reverse = reverse * 10;
		digit = n % 10;
		reverse = reverse + digit;
		n = n / 10;
	}
	cout<<reverse<<endl;
	if (reverse == n) {
		return true;
	}
	return false;

}

// Iterative Factorial
int factorial(int n) {
	int total = 1;
	for (int i=2; i<=n; i++) {
		total = total * i;
	}
	return total;
}
	
// Recursive Factorial
int factorialRecursive(int n) {
	if (n == 0) return 1;
	return n*factorial(n-1);
}

int main() {
	int n = 5;
	cout<<factorialRecursive(n);
	return 0;
}