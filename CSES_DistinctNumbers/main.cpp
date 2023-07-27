#include <iostream>
#include <bitset>

using namespace std;

bitset<1000000000> s;

int main(void)
{
    int n, x, distinct_values = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x;
        if(!s[x]) {
            s[x] = 1;
            distinct_values++;
        }
    }

    cout << distinct_values;

    return 0;
}