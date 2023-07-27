#include <iostream>

using namespace std;

long long n, sum;
long long v[21];

long long diferenta(long long suma, long long k)
{
    if(k == 1)
        return abs((sum - suma) - suma);

    return min(diferenta(suma + v[k], k - 1), diferenta(suma, k - 1));
}

int main(void)
{
    long long x;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x;
        sum += x;
        v[i] = x;
    }

    cout << diferenta(0, n);
    return 0;
}