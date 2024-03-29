#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the discriminant
double calculateDiscriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

// Function to calculate the roots
void calculateRoots(double a, double b, double c) {
    double discriminant = calculateDiscriminant(a, b, c);
    double root1, root2;

    // If discriminant is positive, roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << " and Root 2 = " << root2 << endl;
    }
    // If discriminant is zero, roots are real and equal
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    // If discriminant is negative, roots are complex and imaginary
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i"
             << " and Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    // Input coefficients of quadratic equation
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Call function to calculate roots
    calculateRoots(a, b, c);

    return 0;
}
