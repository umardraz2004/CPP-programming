#include<iostream>
using namespace std;
int main()
{
	int n,i,fac = 1;
	cout<<"Enter the number:";
	cin>>n;
	for (i=n;i!=0;i--)
	{
		fac *= i;
	}
	cout<<fac;
	return 0;
}


