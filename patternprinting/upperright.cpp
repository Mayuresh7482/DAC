#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = i; k <= n; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
