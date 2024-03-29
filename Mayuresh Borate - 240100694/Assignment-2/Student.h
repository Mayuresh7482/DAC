#include<string>
using namespace std;

// Define a class called 'Student'
class Student {
    int rollNo; // Private member variable to store roll number
    string name; // Private member variable to store name
    int marks; // Private member variable to store marks
public:
    // Function prototypes
    void Accept(); // Member function to accept input for a student
    void display(); // Member function to display information of a student
    int getmarks(); // Member function to get marks of a student
};

// Function prototype for sorting students by marks
void sortbymarks(Student*, int);

// Member function definition to accept input for a student
void Student::Accept() {
    cout << "Enter roll number, name, and marks: ";
    cin >> rollNo >> name >> marks; // Input roll number, name, and marks from user
}

// Member function definition to display information of a student
void Student::display() {
    cout << "Roll Number: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
}

// Member function definition to get marks of a student
int Student::getmarks() {
    return marks; // Return the marks of the student
}

// Function definition for sorting students by marks
void sortbymarks(Student* arr, int n) {
    int i, j;
    Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i].getmarks() > arr[j].getmarks()) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
