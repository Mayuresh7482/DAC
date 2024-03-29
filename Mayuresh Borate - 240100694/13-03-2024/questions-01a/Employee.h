#include<iostream>
using namespace std;

class Employee
{
	int empid;
	string name;
	int salary;
	static int count;
	public:
	Employee();
	Employee(int ,string,int );
	void display();
	static void showCount();
};


