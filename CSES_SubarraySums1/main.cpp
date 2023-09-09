#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, target;

    cin >> n >> target;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0, i = 0, j = 0;
    long long sum = 0;

    while(i < n) {
        sum += v[i];
        while(sum >= target) {
            if(sum == target)
                count++;
            sum -= v[j];
            j++;
        }
        i++;
    }

    cout << count;

    return 0;
}