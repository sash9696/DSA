#include <iostream>
using namespace std;

int getSum(int n){
	if(n==0)
	{
		return 0;
	}
	return n+getSum(n-1);
}
int main()
{
	cout<<getSum(2);
	return 0;
}