#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	for(int i = (x>y?y:x);i>0;--i)
	{
		if(x%i==0&&y%i==0)
		{
			cout<<i<<' ';
			break;
		}
	}
	for(int i = (x>y?x:y);i>0;++i)
	{
		if(i%x==0&&i%y==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	
	return 0;
}
