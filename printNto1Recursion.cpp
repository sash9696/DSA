#include <iostream>

using namespace std;

// void print1toNRecursion(int n) {
// 	if (n==0) 
// 		return;
// 	printNto1Recursion(n-1);
// 	cout<<n<<" ";
// }
void printNto1Recursion(int n) {
	if (n==0) 
		return;
	cout<<n<<" ";
	printNto1Recursion(n-1);
}

int main () {
	int n;
	cin>>n;
	printNto1Recursion(n);
	return 0;
}