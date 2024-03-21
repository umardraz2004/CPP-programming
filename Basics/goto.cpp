#include<iostream>
using namespace std;
int main()
{
	int n=1;
	loop:
		cout<<n<<":c++"<<"\n";
		n++;
	if(n<=5)goto loop;
	cout<<"End of program";
	return 0;
}


