#include <iostream>

using namespace std;

bool v[1000001];

int main(void)
{
    long long n;

    cin >> n;

    if((n * (n + 1) / 2) % 2 != 0)
        cout << "NO";
    else {
        long long s, p = n, c = 0;

        cout << "YES" << '\n';

        s = n * (n + 1) / 4;

        while(s > p) {
            c++;
            s -= p;
            v[p] = 1;
            p--;
        }

        if(s) {
            v[s] = 1;
            c++;
        }

        cout << c << '\n';

        for(int i = 1; i <= n; i++)
            if(v[i])
                cout << i << ' ';

        cout << '\n' << n - c << '\n';

        for(int i = 1; i <= n; i++)
            if(!v[i])
                cout << i << ' ';
    }

    return 0;
}