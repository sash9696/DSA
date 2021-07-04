#include <iostream>

using namespace std;


int main() {
	int t;
	cin>>t;

	while (t--) {
		int n, a, b;
		cin>>n>>a>>b;
		int sar=0;
		int anu=0;
		while (n--) {
			string s;
			cin>>s;
			if (s[0]=='E' || s[0]=='Q' || s[0]=='U' 
				|| s[0]=='I' || s[0]=='N' || s[0]=='O'
				|| s[0]=='X') {
				sar += a;
			}
			else {
				anu += b;
			}
		}
		if (sar>anu) {
			cout<<"SARTHAK \n";
		}
		else if (anu==sar) {
			cout<<"DRAW \n";
		}
		else {
			cout<<"ANURADHA \n";
		}
	}

	
}