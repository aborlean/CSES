#include <iostream>

using namespace std;

int n, m;
int map[1001][1001];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool inside(int x, int y)
{
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

void fill(int x, int y)
{
    map[x][y] = 1;
    for(int k = 0; k <= 3; k++) {
        int new_x = x + dx[k];
        int new_y = y + dy[k];
        if(inside(new_x, new_y) && map[new_x][new_y] == 0)
            fill(new_x, new_y);
    }
}

int main(void)
{
    cin >> n >> m;

    char c;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) {
            cin >> c;
            if(c == '#')
                map[i][j]= -1;
        }

    int count = 0;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) {
            if(map[i][j] == 0) {
                count++;
                fill(i, j);
            }
        }

    cout << count;

    return 0;
}