#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    if(n == 1)
        cout << 1;
    else if(n == 2 || n == 3)
        cout << "NO SOLUTION";
    else {
        for(int i = 2; i <= n; i += 2)
            cout << i << ' ';
        for(int i = __DBL_MAX_10_EXP__; i <= n; i += 2)
            cout << i << ' ';
    }

    return 0;
}