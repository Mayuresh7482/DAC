#include<iostream>
#include<cstring>
using namespace std;

void input(char *ch, int n) {
    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        ch[i] = c;
    }
}

void print(char *ch, int n) {
    for(int i = 0; i < n; i++) {
        cout << ch[i] << " ";
    }
    cout << endl;
}

void copyarray(char *ch, char *chcopy, int n) {
    for(int i = 0; i < n; i++) {
        chcopy[i] = ch[i];
    }
}

int main() {
    int n;
    cin >> n;

    // Allocate memory for charArray and copyArray
    char *charArray = new char[n];
    char *copyArray = new char[n];

    input(charArray, n);
    cout << "Original array: ";
    print(charArray, n);

    copyarray(charArray, copyArray, n);
    cout << "Copied array: ";
    print(copyArray, n);

    // Free the allocated memory
    delete[] charArray;
    delete[] copyArray;

    return 0;
}
