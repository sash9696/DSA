#include <iostream>
using namespace std;

int fact(int n, int k)
{	
	if(n==0 || n==1){
		return k;
	}
		
	return fact(n-1, k*n);
}
int main()
{
	int k= 1;
	cout<<fact(5, k);
	return 0;
}