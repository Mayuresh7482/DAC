#include <iostream>

using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int k, i, j;

    cin >> i >> j >> k;

    if (check(i, j, k))

    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }
    return 0;
}