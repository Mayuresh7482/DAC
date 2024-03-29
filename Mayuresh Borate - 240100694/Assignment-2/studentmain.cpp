#include<iostream>
#include"Student.h" // Include the header file containing the definition of the Student class
using namespace std;

// Function prototype for sorting students by marks
void sortbymarks(Student *arr, int n);

int main()
{
    int i, n;
    Student arr[50]; // Array to store student objects
    cout << "How many students? " << endl;
    cin >> n;

    // Accept input for each student
    for (i = 0; i < n; i++) {
        arr[i].Accept(); // Call the Accept() function of the Student class for each object
    }

    // Sort the array of students by marks
    sortbymarks(arr, n);

    // Display the information of each student after sorting
    for (i = 0; i < n; i++) {
        arr[i].display(); // Call the display() function of the Student class for each object
    }

    return 0;
}

// Function definition for sorting students by marks
void sortbymarks(Student *arr, int n) {
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
