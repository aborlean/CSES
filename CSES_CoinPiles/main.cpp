#include <iostream>

using namespace std;

int main(void)
{
    int t, a, b;

    cin >> t;

    for(int i = 1; i <= t; i++) {
        cin >> a >> b;
        if((a + b) % 3 == 0) {
            if(a > b)
                swap(a, b);
            if((2 * a - b) >= 0 && (2 * b - a) >= 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}