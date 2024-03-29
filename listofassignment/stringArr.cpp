#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    // Use std::string instead of a character array
    string arr;
    cout << "Enter characters: ";
    cin >> arr;

    // Print the entered characters
    cout << "Entered characters: " << arr << endl;

    return 0;
}
