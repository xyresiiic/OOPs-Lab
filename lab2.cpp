#include<iostream>
using namespace std;

struct student{
	string name;
	int age;
};

int main()
{
	student s1;
	s1.name="Veer";
	s1.age=18;
	
	cout<<"My name is"<<" "<<s1.name<<endl;
	cout<<"My age is"<<" "<<s1.age<<endl;
	
	
}
