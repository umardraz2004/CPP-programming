#include<iostream>
using namespace std;
int main()
{
	int n,count=0; //Declare to variable n is to get number from user and count is used to check number
	cout<<"Enter positive integer:";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		cout<<"Its a prime number";
	}
	else{
	cout<<"Its a composite number";
	}
	return 0;
}
