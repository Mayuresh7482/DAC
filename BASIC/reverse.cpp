#include <iostream> // Including the input/output stream library.

using namespace std; // Allowing the use of entities from the standard namespace.

int main() // The main function, entry point of the program.
{
    int n; // Declaring an integer variable 'n' to store user input.
    cin >> n; // Taking input from the user and storing it in 'n'.

    int reverse = 0; // Initializing a variable 'reverse' to store the reversed number.

    // Loop to reverse the number
    while (n > 0) // Loop runs until 'n' becomes 0.
    {
        int lastdigit = n % 10; // Extracting the last digit of 'n'.
        reverse = reverse * 10 + lastdigit; // Appending 'lastdigit' to 'reverse'.
        n = n / 10; // Removing the last digit from 'n'.
    }

    // Output the reversed number
    cout << "reverse is : " << reverse << endl; // Printing the reversed number.

    return 0; // Indicating successful completion of the program.
}
