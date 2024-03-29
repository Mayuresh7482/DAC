#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    
    char characters[n];
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> characters[i];
    }

    // Convert characters to a string and print
    string str(characters, n);
    cout << "String: " << str << endl;

    return 0;
}
