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

    for(int i = 0; i < n; i++)
        for(int j = 1; j <= x; j++)
            if(j - v[i] >= 0)
                comb[j] = (comb[j] + comb[j - v[i]]) % mod;

    cout << comb[x];

    return 0;
}