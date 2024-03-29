#include <iostream>  
using namespace std;  

int main()  
{  
    int a[10][10], b[10][10], mul[10][10]; // Declare arrays for the matrices and their product
    int row, col, indu, jagu, katdu; // Declare variables for row, column, and loop indices
    
    cout << "Enter the number of rows = ";    
    cin >> row; // Input the number of rows
    cout << "Enter the number of columns = ";    
    cin >> col; // Input the number of columns
    
    cout << "Enter the elements of the first matrix:\n";    
    for(indu = 0; indu < row; indu++) {    
        for(jagu = 0; jagu < col; jagu++) {    
            cin >> a[indu][jagu]; // Input elements of the first matrix
        }    
    }    
    
    cout << "Enter the elements of the second matrix:\n";    
    for(indu = 0; indu < row; indu++) {    
        for(jagu = 0; jagu < col; jagu++) {    
            cin >> b[indu][jagu]; // Input elements of the second matrix
        }    
    }    
    
    cout << "Multiplication of the matrices:\n";    
    for(indu = 0; indu < row; indu++) {    
        for(jagu = 0; jagu < col; jagu++) {    
            mul[indu][jagu] = 0; // Initialize each element of the product matrix to 0
            for(katdu = 0; katdu < col; katdu++) {    
                mul[indu][jagu] += a[indu][katdu] * b[katdu][jagu]; // Perform matrix multiplication
            }    
        }    
    }    
    
    // Print the resulting matrix
    for(indu = 0; indu < row; indu++) {    
        for(jagu = 0; jagu < col; jagu++) {    
            cout << mul[indu][jagu] << " ";    
        }    
        cout << "\n";    
    }    
    
    return 0;  
} 
