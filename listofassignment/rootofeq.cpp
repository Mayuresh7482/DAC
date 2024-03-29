#include<iostream>
#include<cmath>
using namespace std;

// Function to solve quadratic equation and print roots
void equ(int a, int b, int c) {
    int D = b * b - 4 * a * c;
    
    if (D < 0) {
        cout << "No real roots exist." << endl;
    } else if (D == 0) {
        double root = -b / (2.0 * a);
        cout << "One real root exists: " << root << endl;
    } else {
        double root1 = (-b - sqrt(D)) / (2.0 * a);
        double root2 = (-b + sqrt(D)) / (2.0 * a);
        cout << "Two real roots exist: " << root1 << " and " << root2 << endl;
    }
}

int main() {
    int a, b, c;

    cout << "Enter the coefficient of X^2: ";
    cin >> a;
    cout << "Enter the coefficient of X: ";
    cin >> b;
    cout << "Enter the constant: ";
    cin >> c;

    equ(a, b, c);

    return 0;
}
