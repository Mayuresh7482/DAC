#include <iostream>
using namespace std;

int runningSum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + runningSum(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Running sum of first " << n << " numbers: " << runningSum(n) << endl;
    return 0;
}
