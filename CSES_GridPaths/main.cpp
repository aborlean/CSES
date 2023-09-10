#include <iostream>

using namespace std;

bool map[1001][1001];
int paths[1001][1001];
const int mod = 1e9 + 7;

int main(void)
{
    int n;
    char c;

    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            cin >> c;
            if(c == '*')
                map[i][j] = true;
        }

    if(!map[1][1])
        paths[1][1] = 1;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            if(!map[i][j]) {
                if(i - 1 >= 0 && !map[i - 1][j])
                    paths[i][j] = (paths[i][j] + paths[i - 1][j]) % mod;
                if(j - 1 >= 0 && !map[i][j - 1])
                    paths[i][j] = (paths[i][j] + paths[i][j - 1]) % mod;
            }
        }

    cout << paths[n][n];

    return 0;
}