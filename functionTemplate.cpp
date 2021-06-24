#include <iostream>
using namespace std;

//Template with single argument

template <typename T>

T Max(T x, T y) {
	return (x>y) ? x : y;
}

int main() {
	cout<<Max<int>(3,4)<<endl;
	cout<<Max<float>(3.0, 4.0)<<endl;
	cout<<Max<char>('g', 'e')<<endl;
	return 0;
}

//Template with two arguments

/*
template <typename T>

T Max(T x, T y) {
	return (x>y) ? x : y;
}

int main() {
	cout<<Max<int>(3,4)<<endl;
	cout<<Max<float>(3.0, 4.0)<<endl;
	cout<<Max<char>('g', 'e')<<endl;
	return 0;
}
*/