#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int a = 2,n;
    cin>>n;
    long long sum = 0;
    for(int i=0;i<n;++i)
    {
        sum += a*pow(10,i)*(n-i);
    }
    cout<<sum;
     return 0;
}
