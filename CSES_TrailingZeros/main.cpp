#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long n, c = 0, p = 5;

    cin >> n;

    while(p <= n) {
        c += n / p;
        p *= 5;
    }

    cout << c;

    return 0;
}