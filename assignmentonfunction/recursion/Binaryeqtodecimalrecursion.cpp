#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    cout << n % 2;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    cout << "Binary equivalent: ";
    decimalToBinary(decimalNumber);
    return 0;
}
