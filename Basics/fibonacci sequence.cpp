//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
#include<iostream>
using namespace std;
int main()
{
	int first=0, second=1, sum;
	sum = first + second;
	cout<<first<<" "<<second<<" "<<sum<<" ";
	first ++;
	for(int i=0; i<10; i++){
		sum = first + second;
		cout<<sum<<" ";
		first = second;
		second = sum ;
	}
	return 0;
}
