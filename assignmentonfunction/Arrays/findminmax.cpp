#include <iostream>
#include <climits>
using namespace std;

void findMinMax(int arr[], int n) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
}

void findSecondMinMax(int arr[], int n) {
    int min = INT_MAX, max = INT_MIN;
    int secondMin = INT_MAX, secondMax = INT_MIN;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin) {
            secondMin = arr[i];
        }
        
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    
    cout << "Second Minimum: " << secondMin << endl;
    cout << "Second Maximum: " << secondMax << endl;
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

    // Call the function to find min and max
    findMinMax(arr, n);

    // Call the function to find second min and max
    findSecondMinMax(arr, n);

    return 0;
}
