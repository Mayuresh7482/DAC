#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    // Printing the pattern
    for (int i = N; i >= 1; i--) {
        // Printing spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Printing numbers from N to 1
        for (int j = i; j <= N; j++) {
            cout << j;
        }
        // Printing spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        // Printing numbers from 1 to N
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}