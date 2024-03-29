#include<iostream>
#include<string>
#include"Student.h" // Include the header file containing the declaration of the Student class
using namespace std;

// Member function definition to accept input for a student
void Student::Accept()
{
    cout << "Enter student information" << endl;
    cin >> rollNo; // Input the roll number
    cin.get(); // Clear the newline character from the input buffer
    getline(cin, name); // Input the name using getline to allow spaces
    cin >> marks; // Input the marks
}

// Member function definition to display information of a student
void Student::display()
{
    cout << rollNo << " " << name << " " << marks << endl; // Display roll number, name, and marks
}

// Member function definition to get marks of a student
int Student::getmarks()
{
    return marks; // Return the marks of the student
}
