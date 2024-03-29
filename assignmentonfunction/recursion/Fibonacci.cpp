#include <iostream>
using namespace std;

// Function to generate Fibonacci series recursively
void fibonacci(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    cout << "Fibonacci series: ";
    fibonacci(n);
    return 0;
}
