#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    if(v[0] > 1) {
        cout << 1;
        return 0;
    }

    long long sum = 0;

    for(int i = 0; i < n; i++) {
        if(sum + 1 < v[i]) {
            cout << sum + 1;
            return 0;
        }
        sum += v[i];
    }

    cout << sum + 1;

    return 0;
}