#include <iostream>
#include <vector>

using namespace std;

// struct MyStack() {
// 	vector<int> v;

// 	//Push
// 	void push(int x) {
// 		v.push_back(x);
// 	}

// 	//Pop
// 	int pop() {
// 		int res = v.back();
// 		v.pop_back();
// 		return res;
// 	}

// 	//Peek
// 	int peek() {
// 		return v.back();
// 	}

// 	//Size
// 	int sizes() {
// 		return v.size();
// 	}

// 	//isEmpty
// 	bool isEmpty() {
// 		return v.empty();
// 	}
// };
struct VStack {
	vector<int> v;
	void push(int x) {
		v.push_back(x);
	}
	int pop() {
		int temp = v.back();
		v.pop_back();
		return temp;
	}
	int peek() {
		return v.back();
	}
	int size() {
		return v.size();
	}
	bool isEmpty() {
		return v.empty();
	}
};

int main() {

	VStack s;

	// int n;
	// cin>>n;

	// vector<int> t;

	// for (int i=0; i<n; i++) {
	// 	cin>>t[i];
	// 	s.push(t[i]);
	// }

	// for (int j=0; j<n; j++) {
	// 	cout<<t[j]<<" ";
	// }

	s.push(1);
	s.push(1);
	s.push(1);
	s.push(1);
	s.push(1);
	s.push(1);
	s.push(1);
	s.push(1);

	for(int x:s) {
		cout<<x<<" ";
	}

	return 0;
}