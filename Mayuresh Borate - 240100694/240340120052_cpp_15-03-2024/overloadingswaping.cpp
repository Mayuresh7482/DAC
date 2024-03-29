#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double a = 1.2, b = 3.4;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
