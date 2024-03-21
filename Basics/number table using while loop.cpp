#include<iostream>
using namespace std;
int main()
{
	int i=1,num;
	cout<<"Enter the table you want:";
	cin>>num;
	while(i<=10){
		cout<<num<<"*"<<i<<"="<<i*num<<endl;
		i++;
	}
	return 0;
}
