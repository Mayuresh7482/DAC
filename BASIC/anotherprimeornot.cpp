#include <iostream>
#include <cmath>
// #include <complex>
// #include<math>

using namespace std;
int main()
{
    int n;
    cin >> n;

    bool flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;
            flag = 1;
            break;
        }
    }
    // If the number is divisible
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }

    return 0;
}