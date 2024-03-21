#include <iostream>
using namespace std;
int main() {
    for(int i=5; i>=1; i--)
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
