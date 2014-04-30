#include<iostream>
using namespace std;

int fun(int x)
{
	return x<1?x:(x<10?(2*x-1):(3*x-11));
}

int main()
{
	int x;
	cin>>x;
	cout<<fun(x);
	return 0;
}
