#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	cin>>(a>b?b:a);
	cout<<(a>b?a:b);
	return 0;
}
