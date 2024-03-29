#include <iostream>
using namespace std;
int main()
{
    int number, sum=0, digit; // declare sum= 0 otherwise it will give 4350782
    cout << "Enter the number for sum of Digits: " << endl;
    cin >> number; // initization
    while (number != 0)
    {
        digit = number % 10; // separate last digit 
        sum = sum + digit; // add the digit 
        number = number / 10; // modification
    }
    cout << "Sum of Digits is : " << sum << endl;
    return 0;
}