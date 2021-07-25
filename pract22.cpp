#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int D, d, P, Q;
		cin>>D>>d>>P>>Q;
		int total = 0;
		for (int i=0; i<D; i++) {
			int x = d;
			while(x-- && D != 0) {
				if (x)
				int a = P+Q;
				total += a;
				D--;
			}
			Q++;
		}
		cout<<total;
	}
	return 0;
}