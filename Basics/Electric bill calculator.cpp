#include<iostream>
using namespace std;
int main()
{
	int units,bill;
	cout<<"Enter units:";
	cin>>units;
	if(units <= 100){
		bill=units*15;
		cout<<"Your units is calculated as 15 rupees per unit"<<endl;
	}
	else if(units > 100 && units <= 200){
		bill=units*25;
		cout<<"Your units is calculated as 25 rupees per unit"<<endl;
	}
	else if(units > 200 && units <= 300){
		bill=units*35;
		cout<<"Your units is calculated as 35 rupees per unit"<<endl;
	}
	else{
		bill=units*45;
		cout<<"Your units is calculated as 45 rupees per unit"<<endl;
	}
	cout<<"Your electric bill is:"<<bill;
	return 0;
}
