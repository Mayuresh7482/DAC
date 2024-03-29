#include<iostream>
using namespace std;

// Function to get date, month, and year from user and print in DD/MM/YYYY format
void getDate(int *dd, int *mm, int *yy) {
    // Print leading zeros for single digit date and month
    cout << "Date: " << (*dd < 10 ? "0" : "") << *dd << "/";
    cout << (*mm < 10 ? "0" : "") << *mm << "/";
    cout << *yy << endl;
}

int main() {   
    // Introduction
    cout << "Welcome to the Date Formatter!" << endl;
    cout << "--------------------------------" << endl;
    cout << "This program formats the date you enter in the DD/MM/YYYY format." << endl;
    
    // Input date, month, and year from user
    int date, month, year;
    cout << "Enter the day (1-31): ";
    cin >> date;
    while (date < 1 || date > 31) {
        cout << "Invalid day! Please enter a valid day (1-31): ";
        cin >> date;
    }

    cout << "Enter the month (1-12): ";
    cin >> month;
    while (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a valid month (1-12): ";
        cin >> month;
    }

    cout << "Enter the year: ";
    cin >> year;
    while (year < 0) {
        cout << "Invalid year! Please enter a valid year: ";
        cin >> year;
    }

    // Call function to print formatted date
    getDate(&date, &month, &year);

    return 0;
}
