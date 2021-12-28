#include <iostream>
#include <string>

using namespace std;

int main() {
	string a,b;
	cout<<"Enter \n";
	cin>>a>>b;
	int lenA = a.size();
	int lenB = b.size();
	cout<<lenA<<" "<<lenB<<endl;
	cout<<a+b<<endl;
	char temp = a[0];
	a[0]=b[0];
	b[0]=temp;
	cout<<a<<" "<<b<<endl;

	return 0;
}