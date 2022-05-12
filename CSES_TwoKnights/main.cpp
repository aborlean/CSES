#include <iostream>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;

    for(long long i = 1; i <= n; i++)
        cout << (i - 1) * (i + 4) * (i * i - 3 * i + 4) / 2 << '\n';

    return 0;
}