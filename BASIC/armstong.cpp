#include <iostream>  // Including the input/output stream library.
//#include <cmath>     // Including the math library for pow() function.
using namespace std; // Allowing the use of entities from the standard namespace.

int main() // The main function, entry point of the program.
{
    int n;    // Declaring an integer variable 'n' to store user input.
    cin >> n; // Taking input from the user and storing it in 'n'.

    int sum = 0;       // Initializing a variable 'sum' to store the sum of cubes of digits.
    int originaln = n; // Storing the original value of 'n'.

    // Loop to calculate the sum of cubes of digits
    // Loop to calculate the sum of cubes of digits
    while (n > 0) // Loop runs until 'n' becomes 0.
    {
        int lastdigit = n % 10;                   // Extracting the last digit of 'n'.
        sum += lastdigit * lastdigit * lastdigit; // Adding the cube of 'lastdigit' to 'sum'.
        n = n / 10;                               // Removing the last digit from 'n'.
    }

    // Checking if the sum of cubes of digits is equal to the original number
    if (sum == originaln) // If the sum equals the original number.
    {
        cout << "Armstrong number" << endl; // Printing that it's an Armstrong number.
    }
    else // If the sum doesn't equal the original number.
    {
        cout << "Not an Armstrong number" << endl; // Printing that it's not an Armstrong number.
    }

    return 0; // Indicating successful completion of the program.
}
