// diamond pyramid
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
		for(int k=i; k<=(2*i)-1; k ++)
		{
			cout<<" ";
		}
		for(int k=i; k<=(2*i)-2; k ++)
		{
			cout<<" ";
		}
		for(int l=5; l>i; l--)
		{
			if(l==1){
				break;
			}
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=4; i>=1; i--)
    {
    	for(int j=5; j>=i; j--)
		{
    		cout<<"*";
		}
		for(int j=1; j < ((i-1)*2); j++)
		{
			cout<<" ";
		}
		for(int j=5; j>=i; j--)
		{
			if(i==1 && j==1)
			{
				break;		
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
