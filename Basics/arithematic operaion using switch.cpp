#include<iostream>
using namespace std;
int main()
{
	int a,b,result;
	char c;
	cout<<"Enter First number:";
	cin>>a;
	cout<<"What operation you want play:";
	cin>>c;
	cout<<"Enter Second number:";
	cin>>b;
	if(c=='+'){
	result=a+b;
	cout<<a<<c<<b<<"="<<result;
	}
	else if(c=='-'){
	result=a-b;
	cout<<a<<c<<b<<"="<<result;
	}
	else if(c=='*'){
	result=a*b;
	cout<<a<<c<<b<<"="<<result;
	}
	else if(c=='/'){
	result=a/b;
	cout<<a<<c<<b<<"="<<result;
	}
	else if(c=='%'){
	result=a%b;
	cout<<a<<c<<b<<"="<<result;
	}
	else 
	cout<<"INVALID";
	return 0;
}
