#include <iostream>
#include <algorithm>
using namespace std;

void sortAndDisplay(int arr[], int n) {
    // Sort the array
    sort(arr, arr + n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
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
    
    // Call the function to sort and display the array
    sortAndDisplay(arr, n);

    return 0;
}
