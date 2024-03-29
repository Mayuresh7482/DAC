#include<iostream>
#include<cmath>
using namespace std;

int main() {   
    int num, ans = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        ans += pow(rem, 3);
        temp /= 10;
    }

    if (ans == num) {
        cout << "Number is Armstrong" << endl;
    } else {
        cout << "Number is Not Armstrong" << endl;
    }
    
    return 0;
}
