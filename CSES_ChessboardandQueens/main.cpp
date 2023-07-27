#include <iostream>

using namespace std;

int cnt, n;
int col[9];
int diag1[16];
int diag2[16];
char blocate[9][9];

void regine(int y)
{
    if(y == n) {
        cnt++;
        return;
    }
    for(int x = 0; x < n; x++) {
        if(col[x] || diag1[x + y] || diag2[x - y + n - 1] || blocate[x][y] == '*')
            continue;
        col[x] = 1;
        diag1[x + y] = 1;
        diag2[x - y + n - 1] = 1;
        regine(y + 1);
        col[x] = 0;
        diag1[x + y] = 0;
        diag2[x - y + n - 1] = 0;
    }
}

int main(void)
{
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            cin >> blocate[i][j];

    n = 8;
    regine(0);

    cout << cnt;

    return 0;
}