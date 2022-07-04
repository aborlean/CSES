#include <iostream>

#define MOD 1000000007

using namespace std;

long long powmod(long long a, long long n)
{
    if(n == 0)
        return 1;

    if(n % 2 == 1)
        return (a * powmod(a , n - 1)) % MOD;

    long long p = powmod(a, n / 2);

    return (p * p) % MOD;
}

int main(void)
{
    long long n;

    cin >> n;

    cout << powmod(2, n);

    return 0;
}