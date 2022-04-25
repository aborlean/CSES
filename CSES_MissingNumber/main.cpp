#include <iostream>

using namespace std;

int main(void)
{
    long long n, a, s;

    cin >> n;

    s = n * (n + 1) / 2;

    for(int i = 1; i < n; i++) {
        cin >> a;
        s -= a;
    }

    cout << s;

    return 0;
}