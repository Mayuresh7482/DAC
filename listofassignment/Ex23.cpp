#include<iostream>
using namespace std;

int* MaxNumber(int *n1, int *n2) {
    if (*n1 > *n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {   
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    int *max = MaxNumber(&num1, &num2);
    cout << "Maximum Number is " << *max << endl;
    return 0;
}
