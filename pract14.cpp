#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int g;
		cin>>g;
		int total = 0;
		int count = 0;
		for (int i=1; i<=g; i++) {
			if (i == g) {
				count++;
				break;
			}
			for (int j=i; j<=g; j++) {
				total += j;
				if (total>g) {
					break;
				}
				else if(total == g) {
					count++;
					break;
				}
				else {
					continue;
				}
			}
		}
		cout<<count;
	}

	return 0;
}