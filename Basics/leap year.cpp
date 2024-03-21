#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"Enter year:";
	cin>>y;
	if(y%4==0)
	{
		cout<<"Its a leap year:";
	}
	else
	cout<<"Its not a leap year:";
	return 0;
}
