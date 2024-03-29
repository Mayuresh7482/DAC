#include<iostream> // Include the header file for input and output operations
using namespace std; // Use the standard namespace

class MyArray{ // Definition of the MyArray class
	public:
	int size; // Member variable to store the size of the array
	int *p; // Pointer to dynamically allocated memory for the array
	
	MyArray(int size){ // Constructor to initialize the MyArray object with a given size
		this->size = size; // Assign the size passed to the constructor to the size member variable
		p = new int[size]; // Dynamically allocate memory for the array of integers
	}
	
	void setAtIndex(int i, int val){ // Method to set the value at a specific index in the array
		p[i] = val; // Assign the value 'val' to the element at index 'i'
	}
	
	int getAtIndex(int index){ // Method to get the value at a specific index in the array
		return p[index]; // Return the value stored at the specified index
	}
};

int main(){ // Main function where the program execution begins
	
	MyArray a(3); // Create an instance of MyArray with size 3
	a.setAtIndex(0, 96); // Set value 96 at index 0
	a.setAtIndex(1, 69); // Set value 69 at index 1
	a.setAtIndex(2, 70); // Set value 70 at index 2
	
	for(int i = 0; i<3; i++) { // Iterate over each element of the array
		cout << a.getAtIndex(i) << " "; // Output the value at each index
	}
	
	return 0; // Return 0 to indicate successful completion of the program
}
