#include<iostream>

using namespace std;

int main()
{
	int x;
	//cout<<"int"<<sizeof(int)<<"long"<<sizeof(long)<<"long long"<<sizeof(long long);
	cin>>x;
	switch((x-1)/100000)
	{
		case 0:	cout<<x*0.1; 	break;
		case 1: cout<<10000+(x-100000)*0.075; 	break;
		case 2:	;
		case 3: cout<<10000+7500+(x-200000)*0.05; 	break;
		case 4: ;
		case 5: cout<<10000+7500+10000+(x-400000)*0.03; 	break;
		case 6: ;
		case 7: ;
		case 8:	;
		case 9:	cout<<27500+6000+(x-600000)*0.015; 	break;
		default: cout<<27500+12000+(x-1000000)*0.01;		break;
	}
	return 0;
}

