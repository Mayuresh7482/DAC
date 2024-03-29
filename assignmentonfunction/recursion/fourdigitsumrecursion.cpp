#include <iostream>

// Function to calculate sum of digits using loop
int sumOfDigitsLoop(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to calculate sum of digits using recursion
int sumOfDigitsRecursion(int num) {
    if (num == 0)
        return 0;
    return (num % 10 + sumOfDigitsRecursion(num / 10));
}

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    if (num < 1000 || num > 9999) {
        std::cout << "Invalid input! Please enter a 4-digit number." << std::endl;
        return 1;
    }

    int sumLoop = sumOfDigitsLoop(num);
    int sumRecursion = sumOfDigitsRecursion(num);

    std::cout << "Sum of digits using loop: " << sumLoop << std::endl;
    std::cout << "Sum of digits using recursion: " << sumRecursion << std::endl;

    return 0;
}
