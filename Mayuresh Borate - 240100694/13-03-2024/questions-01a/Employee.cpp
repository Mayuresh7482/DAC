#include<iostream>
#include"Employee.h"

using namespace std;


int Employee::count;
Employee::Employee(){
	empid=101;
	name="abc";
	salary=10000;
	count++;
}
Employee::Employee(int id ,string n ,int sal)
{
	empid=id;
	name=n;
	salary=sal;
	count++;
}

void Employee::display()
{
	cout<<empid<<" "<<name<<"  "<<salary<<endl;
}

void Employee::showCount()
{
	cout<<"Number of object - "<<count<<endl;
}
