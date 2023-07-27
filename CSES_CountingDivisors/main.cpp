#include <iostream>

using namespace std;

int num_div(int x)
{
    int div = 1;

    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            int p = 0;
            while(x % i == 0) {
                p++;
                x /= i;
            }
            div *= (p + 1);
        }
    }

    if(x != 1)
        div *= 2;

    return div;
}

int main(void)
{
    int n, x;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x;
        cout << num_div(x) << '\n';
    }
    return 0;
}