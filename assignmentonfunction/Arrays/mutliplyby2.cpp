#include <iostream>
using namespace std;

void multiplyByTwo(int arr[], int n) {
    cout << "Result after multiplying each number by 2: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Call the function to multiply each number by 2
    multiplyByTwo(arr, n);

    return 0;
}
