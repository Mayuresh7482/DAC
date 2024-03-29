#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping with third variable: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swapping without third variable: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
