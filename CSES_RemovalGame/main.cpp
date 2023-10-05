#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    long long total = 0;

    cin >> n;

    vector<long long> v(n);
    vector<vector<long long>> max_dif(n, vector<long long>(n));

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        max_dif[i][i] = v[i];
        total += v[i];
    }

    for(int left = n - 1; left >= 0; left--)
        for(int right = left + 1; right < n; right++) {
            long long first = v[left] - max_dif[left + 1][right];
            long long last  = v[right] - max_dif[left][right - 1];
            max_dif[left][right] = max(first, last);
        }

    cout << (total + max_dif[0][n - 1]) / 2;
    
    return 0;
}