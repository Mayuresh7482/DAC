#ifndef EMPLOYEE_H // Header guard to prevent multiple inclusions
#define EMPLOYEE_H

#include<string> // Include the string header file
using namespace std; // Use the standard namespace

class Employee{
	int empId; // Employee ID
	string empName; // Employee name
	int salary; // Employee salary
	public:
	static int count; // Static member to keep track of the count of employees

	Employee(); // Constructor declaration for Employee class with no parameters
	Employee(int empId, string empName, int salary); // Constructor declaration for Employee class with parameters
	int getSalary(); // Method declaration to get the salary of an employee
	void accept(); // Method declaration to accept input for employee details
	void displayData(); // Method declaration to display employee data
	static void getCount(); // Method declaration to get the count of employees
};

#endif // End of header guard
