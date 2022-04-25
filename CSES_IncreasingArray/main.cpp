#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long a, p, c = 0;

    cin >> n >> p;

    for(int i = 1; i < n; i++) {
        cin >> a;
        if(a < p) {
            c += p - a;
            a += p - a;
        }
        p = a;
    }

    cout << c;

    return 0;
}