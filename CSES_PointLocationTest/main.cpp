#include <iostream>

using namespace std;

void solve(int x1, int x2, int x3, int y1, int y2, int y3)
{
    x2 -= x1;
    y2 -= y1;
    x3 -= x1;
    y3 -= y1;

    long long val = (long long)x2 * y3 - (long long)x3 * y2;

    if(val < 0)
        cout << "RIGHT" << '\n';
    else if(val > 0)
        cout << "LEFT" << '\n';
    else
        cout << "TOUCH" << '\n';

}
int main(void)
{
    int n, x1, x2, x3, y1, y2, y3;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        solve(x1, x2, x3, y1, y2, y3);
    }

    return 0;
}