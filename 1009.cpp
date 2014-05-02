#include<iostream>
#include<string>
using namespace std;
char *turnToString(int parm);
int main()
{
	int x;
	cin>>x;
	char *str = turnToString(x);	
	bool flag = 1;
	for(int i=4;i>=0;--i)
	{
		if(*(str+i)!=48)
		{
			if(flag)
			{
				flag = 0;
				cout<<i+1<<endl;
			}
			cout<<*(str+i);
			if(i!=0)
			cout<<' ';	
		}
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		//cout<<'i'<<i<<' ';
		if(*(str+i)==48)
			break;	//可以试试continue
		cout<<*(str+i);
	}
	cout<<endl;
	return 0;
}
char* turnToString(int parm)
{
	char *returnString = new char[6];
	returnString[0] = parm%10+48;
	returnString[1] = (parm-parm/100*100)/10+48;
	returnString[2] = (parm-parm/1000*1000)/100+48;
	returnString[3] = (parm-parm/10000*10000)/1000+48;
	returnString[4] = parm/10000+48;
	return returnString;
}
