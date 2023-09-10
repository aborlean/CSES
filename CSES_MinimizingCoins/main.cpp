#include <iostream>
#include <vector>

using namespace std;

const int mod = 1e9 + 7;

int main(void)
{
    int n, x;

    cin >> n >> x;

    vector<int> v(n);
    vector<int> coins(x + 1, mod);
    coins[0] = 0;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 1; i <= x; i++)
        for(int j = 0; j < n; j++)
            if(i - v[j] >= 0)
                coins[i] = min(coins[i], coins[i - v[j]] + 1);

    if(coins[x] == mod)
        cout << -1;
    else
        cout << coins[x];

    return 0;
}