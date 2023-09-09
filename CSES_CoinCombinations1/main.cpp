#include <iostream>
#include <vector>

using namespace std;

const int mod = 1e9 + 7;

int main(void)
{
    int n, x;

    cin >> n >> x;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long> comb(x + 1, 0);
    comb[0] = 1;

    for(int i = 1; i <= x; i++)
        for(int j = 0; j < n; j++)
            if(i - v[j] >= 0)
                comb[i] = (comb[i] + comb[i - v[j]]) % mod;

    cout << comb[x];

    return 0;
}