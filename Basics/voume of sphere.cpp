#include<iostream>
using namespace std;
const float pi=3.14;
int main()
{
	int r;
	float v;
	cout<<"Enter the radius of circle:";
	cin>>r;
	v=4*(pi*r*r*r)/3;
	cout<<"Volume of sphere is:"<<v;
	return 0;
}

