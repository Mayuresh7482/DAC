#include <iostream>

using namespace std;

int main()
{
    int a, b;

    // Input two integers 'a' and 'b'
    cin >> a >> b;

    // Iterate over each number in the range from 'a' to 'b'
    for (int num = a; num <= b; num++)
    {
        int i;
        // Check divisibility of 'num' by numbers from 2 to 'num - 1'
        for (i = 2; i < num; i++)
        {
            // If 'num' is divisible by 'i', break out of the loop
            if (num % i == 0)
            {
                break;
            }
        }
        // If 'i' reached 'num' (no divisor found), 'num' is prime
        if (i == num)
        {
            // Print the prime number
            cout << num << endl;
        }
    }
    return 0;
}
