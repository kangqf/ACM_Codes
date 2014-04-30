#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	const double PI = acos(-1);
//	cout<<PI;
	double r,h;
	cin>>r>>h;
	cout<<setprecision(3)<<"C1="<<PI*r*2<<endl<<"Sa="<<PI*r*r<<endl<<setprecision(4)<<"Sb="<<4*PI*r*r<<endl
		<<"Va="<<4*PI*r*r*r/3<<endl<<"Vb="<<PI*r*r*h<<endl;
	return 0;
}
