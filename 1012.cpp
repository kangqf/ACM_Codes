#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int number = 0,capital = 0,lowerChar = 0,otherChar = 0,space = 0;
	for(auto ch : str)
	{    //大写capital：65  小写lowerChar：97 数字number：48
		if(ch == 32)
		{
			space++;
		}
		else if(ch>=65&&ch<=90)
		{
 			capital++;
		}
		else if(ch>=48&&ch<=57)
		{
 			number++;	
		}
		else if(ch>=97&&ch<=122)
		{
			lowerChar++;
		}
		else
		{
			otherChar++;	
		}
	}
	cout<<capital+lowerChar<<" "<<number<<" "<<space<<" "<<otherChar;
	return 0;
}
