#include<iostream>
#include<string>
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

		// Member function to get the marks of the student
		int getMarks() const
		{
			return marks;
		}
};

// Function to swap two students
void swap(students& a, students& b)
{
	students temp = a;
	a = b;
	b = temp;
}

int main()
{
	students arr[2]; // Create an array of objects of the class 'students'

	// Get input for both students
	for(int i = 0; i < 2; ++i)
	{
		arr[i].get();
	}

	// Sort the students by marks using bubble sort
	for(int i = 0; i < 2 - 1; ++i)
	{
		for(int j = 0; j < 2 - i - 1; ++j)
		{
			// Compare marks and swap if necessary
			if(arr[j].getMarks() > arr[j + 1].getMarks())
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	// Display information for both students (sorted by marks)
	for(int i = 0; i < 2; ++i)
	{
		arr[i].display();
	}

	return 0;
}
