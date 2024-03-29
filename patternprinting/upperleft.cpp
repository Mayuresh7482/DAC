#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

