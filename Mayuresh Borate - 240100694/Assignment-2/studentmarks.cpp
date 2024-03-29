#include<iostream>
using namespace std;

// Define a class called 'students'
class students
{
	private:
		int rollNo; // Private member variable to store roll number
		string name; // Private member variable to store name
		int marks; // Private member variable to store marks
	public:
		// Member function to get input from user
		void get()
		{
			cout<<"Enter your name, roll number, and marks: "<<endl;
			cin>>name>>rollNo>>marks; // Input name, roll number, and marks from the user
		}
		
		// Member function to display student information
		void display()
		{
			cout<<"Name: "<<name<<endl; // Display student's name
			cout<<"Roll number: "<<rollNo<<endl; // Display student's roll number
			cout<<"Marks: " <<marks<<endl; // Display student's marks
		}
};

int main()
{
	students s1, s2; // Create two objects of the class 'students'

	// Get input for the first student
	s1.get();

	// Get input for the second student
	s2.get();

	// Display information for the first student
	s1.display();

	// Display information for the second student
	s2.display();

	return 0;
}
