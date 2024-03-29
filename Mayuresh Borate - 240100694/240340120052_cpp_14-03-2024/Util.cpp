#ifndef unills_h // Header guard to prevent multiple inclusions
#define unills_h

#include "Employee.h" // Include the header file for the Employee class

void sortBySalary(Employee *e, int n){ // Function to sort an array of Employee objects based on salary
	
	for(int i = 0; i<n; i++) { // Outer loop to traverse the array
		for(int j = i + 1; j<n; j++) { // Inner loop to compare each element with the rest
			if(e[i].getSalary() > e[j].getSalary()) { // Compare salaries of two employees
				swap(e[i], e[j]); // Swap the employees if the salary of the first one is greater
			} 
		}
	}
}

#endif // End of header guard
