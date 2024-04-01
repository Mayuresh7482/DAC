#include <iostream>
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}