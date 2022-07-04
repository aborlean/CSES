#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string v1[66000];
string v2[66000];

int main(void)
{
    int n, p = 1;

    cin >> n;

    for(int i = 1; i <= 65999; i++) {
        v1[i] = '0';
        v2[i] = '0';
    }
    v1[2] = '1';

    for(int i = 2; i <= n; i++) {
        p = pow(2, i - 1);
        for(int i = 1; i <= p; i++)
            v2[i] = v1[p + 1 - i];
        for(int i = 1; i <= p; i++) {
            v1[i] = '0' + v1[i];
            v2[i] = '1' + v2[i];
        }
        for(int i = 1; i <= p; i++)
            v1[p + i] = v2[i];
    }

    for(int i = 1; i <= p * 2; i++)
        cout << v1[i] << '\n';

    return 0;
}