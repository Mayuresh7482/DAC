#include <iostream>
#include "arith.h"
using namespace std;

int main() {
    int a, b;
    cout << "Enter the num1: ";
    cin >> a;
    cout << "Enter the num2: ";
    cin >> b;

    cout << "Addition: " << addition(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiplication(a, b) << endl;
    
    if (b != 0)
        cout << "Division: " << division(a, b) << endl;
    else
        cout << "Error: Division by zero!" << endl;

    return 0;
}
