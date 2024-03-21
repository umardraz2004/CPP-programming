#include<iostream>
using namespace std;
int sum(int x ,int y );
int main()
{
	int arr[10],x,count=0;
	cout<<"Enter ten values:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value you wnat to search:";
	cin>>x;
	for(int j=0;j<10;j++)
	{
		if(x==arr[j]){
		cout<<"The is values is:"<<arr[j]<<" "<<"The index is:"<<j<<"\n";
		count++;
		}
	}
	cout<<"The value is repeated "<<count<<" times:";
	return 0;
}

