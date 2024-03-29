#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num == 0 || num == 1) {
        cout << "Number is not Prime" << endl;
    } else if (num == 2) {
        cout << "Number is Prime" << endl;
    } else {
        if (is_prime(num)) {
            cout << "Prime" << endl;
        } else {
            cout << "Non Prime" << endl;
        }
    }

    return 0;
}
