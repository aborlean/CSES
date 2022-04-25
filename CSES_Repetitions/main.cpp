#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int b, p, c, lc = 1, lmax = 0;
    char a[1000000];

    cin >> a;

    b = strlen(a);

    p = a[0];

    for(int i = 1; i < b; i++) {
        c = a[i];
        if(p == c)
            lc++;
        else{
            if(lc > lmax)
                lmax = lc;
            lc = 1;
            p = c;
        }
    }

    if(lc > lmax)
        lmax = lc;

    cout << lmax;

    return 0;
}