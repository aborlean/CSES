#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long x, y;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x >> y;
        if(x > y)
            if(x % 2 == 0)
                cout << x * x - y + 1 << '\n';
            else
                cout << (x - 1) * (x - 1) + y << '\n';
        else
            if(y % 2 == 0)
                cout << (y - 1) * (y - 1) + x << '\n';
            else
                cout << y * y - x + 1 << '\n';

    }

    return 0;
}