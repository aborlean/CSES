#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    vector<int> steps(n + 1, 1e9);

    steps[0] = 0;

    for(int i = 1; i <= n; i++) {
        int aux = i;
        while(aux > 0) {
            steps[i] = min(steps[i], steps[i - aux % 10]  +1);
            aux /= 10;
        }
    }

    cout << steps[n];

    return 0;
}