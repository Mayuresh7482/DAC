#include<iostream>
using namespace std;

int main(){
  // Declare an integer variable to store the 4 digit number.
  int number;

  // Prompt the user to enter the 4 digit number.
  cout << "Enter a 4 digit number: " << endl;
  cin >> number;

  // Extract the digits of the number using the modulo operator.
  int thousands_digit = number / 1000;
  int hundreds_digit = number % 1000 / 100;
  int tens_digit = number % 100 / 10;
  int ones_digit = number % 10;

  // Display the face value of each decimal digit.
  cout << "Face value of each decimal digit: " << thousands_digit << hundreds_digit << tens_digit << ones_digit << endl;

  // Display the place value of each decimal digit.
  cout << "Place value of each decimal digit: " << thousands_digit * 1000 << " " << hundreds_digit * 100 << " " << tens_digit * 10 << " " << ones_digit * 1 << endl;

  // Display the number in reverse order by changing decimal place values.
  cout << "Number in reverse order by changing decimal place values: " << ones_digit * 1000 + tens_digit * 100 + hundreds_digit * 10 + thousands_digit << endl;

  return 0;
}
