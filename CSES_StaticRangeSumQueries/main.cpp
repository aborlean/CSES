#include <iostream>

using namespace std;

long long v[200001];
long long sums[200001];

int main(void)
{
    int n, q;

    cin >> n >> q;

    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for(int i = 1; i <= n; i++)
        sums[i] = sums[i - 1] + v[i];

    int a, b;

    for(int i = 1; i <= q; i++) {
        cin >> a >> b;
        cout << sums[b] - sums[a - 1] << '\n';
    }

    return 0;
}