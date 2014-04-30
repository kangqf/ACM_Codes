#include<iostream>
using namespace std;

int main()
{
	int marks;
	cin>>marks;
	if(marks>=0&&marks<=100)
	{
		switch(marks/10)
		{
			case 9 : cout<<"A";break;
			case 8 : cout<<"B";break;
			case 7 : cout<<"C";break;
			case 6 : cout<<"D";break;
			default :cout<<"E";break;
		}
	}
	return 0;
}
