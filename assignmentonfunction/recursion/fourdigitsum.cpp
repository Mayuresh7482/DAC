#include <iostream>
using namespace std;
// Function to calculate the sum of digits of a 4-digit number
int sumOfDigits(int number)
{
    int sum = 0;

    while (number)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main()
{
    int number;

    cout << "Enter a 4-digit number: " << endl;
    cin >> number;

    int sum = sumOfDigits(number);
    cout << "Sum of digits: \n"
         << sum;

    return 0;
}

/* #include <stdio.h>

// Function to calculate the sum of digits of a 4-digit number
int sumOfDigits(int number) {
    int sum = 0;

    for (; number > 0; number /= 10) {
        sum += number % 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
 */

/* #include <stdio.h>

// Function to calculate the sum of digits of a 4-digit number using recursion
int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    }
    return (number % 10) + sumOfDigits(number / 10);
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);

    printf("Sum of digits: %d\n", sum);

    return 0;
}
 */