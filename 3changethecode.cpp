#include<iostream>
using namespace std;
int main()
{
	char str[] = "China";
	char *p = str;
	while(*p)
	{
		*p = *p + 4;
		cout<< *p;
		++p;
	}
	cout<<endl;
	return 0;
}
