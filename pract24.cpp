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

int main() {
	int n = 367;
	// cin>>n;
	if(palindromeNumber(n)) {
		cout<<n<<" is a palindrome \n";
	}
	else {
		cout<<n<<" is not a palindrome \n";
	}
	return 0;
}