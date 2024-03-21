#include<iostream>
using namespace std;
int main()
{
	system("color 1F");
	char ch;
	int units,bill,x;
	cout<<"Enter the bill type (comercial,house) use c for comercial and h for house:";
	cin>>ch;
	cout<<"Enter your units:";
	cin>>units;
	if(ch == 'h'){
	if(units<=100)
	{
		bill= units * 10;
	}
	else if(units > 100 && units <= 200){
		x = units - 100;
		bill = 1000 + (x*20);
	}
	else if(units > 200 && units <= 250){
		x = units - 200;
		bill = 3000 + (x*25);
	}
	else{
		x= units - 250;
		bill = 4250 + (x*40);
	}
	bill = bill + (bill * 0.1);
	}
	else{
	if(units<=100)
	{
		bill= units * 15;
	}
	else if(units > 100 && units <= 200){
		x = units - 100;
		bill = 1500 + (x*27);
	}
	else if(units > 200 && units <= 250){
		x = units - 200;
		bill = 4200 + (x*35);
	}
	else{
		x= units - 250;
		bill = 5950 + (x*52);
	}
	bill = bill + (bill * 0.25);
	}
	cout<<"Your electric bill is:"<<bill;
	return 0;
}
