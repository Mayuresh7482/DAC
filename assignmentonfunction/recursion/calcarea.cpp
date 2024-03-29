#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) {
    return PI * radius * radius;
}

double areaOfRectangle(double length, double width) {
    return length * width;
}

double areaOfSquare(double side) {
    return side * side;
}

int main() {
    double radius, length, width, side;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << areaOfRectangle(length, width) << endl;

    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << areaOfSquare(side) << endl;

    return 0;
}
