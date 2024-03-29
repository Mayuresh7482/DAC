#include<iostream>
using namespace std;

// Function to calculate power of a number
float power(float base, int exponent) {
    float result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }  
    return result;
}

// Function to calculate factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {   
    // Introduction and instructions
    cout << "Welcome to the Sine Calculator!" << endl;
    cout << "--------------------------------" << endl;
    cout << "This program calculates the sine of an angle in degrees." << endl;
    cout << "Enter the angle in degrees: ";

    // Input angle from the user
    float angle;
    cin >> angle;

    // Convert angle from degrees to radians
    float pi = 3.142;
    float radian = 180 / pi;
    float angleInRadians = angle / radian;

    // Calculate sine using Taylor series expansion
    float sine = angleInRadians - (power(angleInRadians, 3) / factorial(3)) 
                 + (power(angleInRadians, 5) / factorial(5)) 
                 - (power(angleInRadians, 7) / factorial(7)) 
                 + (power(angleInRadians, 9) / factorial(9));

    // Output the result
    cout << "The sine of " << angle << " degrees is: " << sine << endl;

    return 0;
}
