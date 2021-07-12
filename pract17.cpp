#include <iostream>
#include <vector>

using namespace std;

int main () {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);


	vector<int> temp;

	for (int i=0; i<v.size(); i++) {
		temp.push_back(v[i]);
		temp.push_back(v[i+n]);
	}

	for (int i=0; i<v.size(); i++) {
		cout<<temp[i]<<" ";
	}
 	
	return 0;
}