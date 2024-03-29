#include<iostream>
#include "Employee.h" // Include the header file for the Employee class
using namespace std; // Use the standard namespace

// Constructor definition for Employee class with no parameters
Employee :: Employee(){
	++count; // Increment the count of employees
}

// Constructor definition for Employee class with parameters
Employee :: Employee(int empId, string empName, int salary){
	this->empId = empId; // Set employee ID
	this->empName = empName; // Set employee name
	this->salary = salary; // Set employee salary
	++count; // Increment the count of employees
}

// Method to get the salary of an employee
int Employee :: getSalary() {
	return salary; // Return the salary of the employee
}

// Method to accept input for employee details
void Employee :: accept(){
	cout << "Enter ID "; // Prompt user to enter employee ID
	cin >> this->empId; // Read employee ID from input
	cout << endl;
	cout << "Enter Name "; // Prompt user to enter employee name
	cin >> this->empName; // Read employee name from input
	cout << endl;
	cout << "Enter Salary "; // Prompt user to enter employee salary
	cin >> this->salary; // Read employee salary from input
	cout << endl;
} 

// Method to display employee data
void Employee :: displayData(){
	cout << this->empId << " " << this->empName << " " << this->salary; // Display employee ID, name, and salary
}

// Method to get the count of employees
void Employee :: getCount(){
	cout << count << "\n"; // Output the count of employees
}

int Employee :: count = 0; // Initialize the count of employees to 0
