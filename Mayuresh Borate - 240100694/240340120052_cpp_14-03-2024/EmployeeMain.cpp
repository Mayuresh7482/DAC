#include<iostream>
#ifndef main_h // Header guard to prevent multiple inclusions
#define main_h

#include "Employee.h" // Include the header file for the Employee class
#include "Util.h" // Include the header file for the Util functions

int main(){
	
	Employee e[2]; // Array of Employee objects
	e[0].accept(); // Accept details for the first employee
	e[1].accept(); // Accept details for the second employee
	Employee::getCount(); // Output the count of employees
	cout << endl;
	//cout << e.getSalary();
	cout << endl;
	
	sortBySalary(e,2); // Sort employees by salary
	
	for(int i = 0; i<2; i++) {
		e[i].displayData(); // Display data of each employee
		cout << endl;
	}
	
	return 0; // Return 0 to indicate successful completion
}

#endif // End of header guard
