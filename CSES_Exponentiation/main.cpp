#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

long long power(long long a, long long b)
{
    if(b == 0)
        return 1;

    long long result = power(a, b / 2) % mod;

    if(b % 2 == 0)
        return (result * result) % mod;
    return a * ((result * result) % mod) % mod;
}

int main(void)
{
    int n, a, b;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a >> b;
        cout << power(a, b) << '\n';
    }

    return 0;
}