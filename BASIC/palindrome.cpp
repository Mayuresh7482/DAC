#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of rows for the pyramid

    // Loop to iterate through each row of the pyramid
    for (int i = 1; i <= n; i++) {
        // Loop to print spaces before the numbers in each row
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        int k = i;
        // Loop to print numbers in each row
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << k; // Print the current number

            // Adjust the value of 'k' based on the position within the row
            if (j < i)
                k--; // Decrease 'k' if 'j' is less than 'i'
            else
                k++; // Increase 'k' if 'j' is greater than or equal to 'i'
        }

        cout << endl; // Move to the next line for the next row
    }

    return 0;
}
