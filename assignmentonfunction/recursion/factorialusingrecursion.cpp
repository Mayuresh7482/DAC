#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void factorialSeries(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << factorial(i) << " ";
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Factorial series up to " << n << ": ";
    factorialSeries(n);
    cout << endl;
    return 0;
}
