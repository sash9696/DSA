#include <iostream> 

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		float zero=0;
		float one=0;
		int l;
		cin>>l;
		int s[l];
		for (int i=0; i<l; i++) {
			cin>>s[i];
		}

		for (int i=0; i<l; i++) {
			if (s[i]==0) {
				zero++;
			}
			else if(s[i]==1) {
				one++;
			}
		}

		cout<<"zero "<<zero<<endl;
		cout<<"one "<<one<<endl;

		if (zero/l>=0.5) {
			cout<<"YES \n";
		}
		else {
			cout<<"NO \n";
		}

	}
	return 0;
}