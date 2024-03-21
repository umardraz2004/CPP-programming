#include<iostream>
using namespace std;
class Employee{
	public:
	string name;
	int age,id;
	void setdata(){
		cout<<"Enter your name:";
		getline(cin,name);
		cout<<"Enter your age:";
		cin>>age;
		cout<<"Enter your id:";
		cin>>id;
	}
	void display_data(){
		cout<<"Your name:"<<name<<endl;
		cout<<"Your age:"<<age<<endl;
		cout<<"Your id:"<<id<<endl;
	}
};
int main(){
	Employee e1;
	e1.setdata();
	e1.display_data();
	return 0;
}
