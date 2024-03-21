#include <iostream>
using namespace std;
int main() 
{
	for(int i=0; i<5; i++)
	{
		for(int j=5; j>i; j--)
		{
			cout<<"*";
		}
		for(int k=i; k<=(2*i)-1; k++)
		{
			cout<<" ";
		}
		for(int k=i; k<=(2*i)-2; k++)
		{
			cout<<" ";
		}
		for(int l=5; l>i; l--)
		{
			if(l==1)
			{
				break;
			}
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
