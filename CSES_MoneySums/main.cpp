#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, sum = 0;
    vector<int> v(n);

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    vector<int> sums(sum + 1, 0);
    sums[0] = 1;

    for(int i = 0; i < n; i++)
        for(int j = sum; j >= v[i]; j--)
            sums[j] += sums[j - v[i]];

    int cnt = 0;

    for(int i = 1; i <= sum; i++)
        if(sums[i])
            cnt++;

    cout << cnt << '\n';

    for(int i = 1; i <= sum; i++)
        if(sums[i])
            cout << i << ' ';

    return 0;
}