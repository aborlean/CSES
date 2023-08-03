#include <iostream>
#include <climits>
#include <queue>
#include <vector>

using namespace std;

int n, m;
int xs, ys, xf, yf;
int map[1001][1001];
char road[1001][1001];
int visited[1001][1001];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<char> path;

bool inside(int x, int y)
{
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

bool bfs(int x, int y)
{
    queue<pair<int,int> > q;

    q.push(make_pair(x, y));
    visited[x][y] = 1;

    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int x1 = p.first;
        int y1 = p.second;

        if(x1 == xf && y1 == yf) {
            while(true) {
                path.push_back(road[x1][y1]);

                if(path.back() == 'L')
                    y1++;
                if(path.back() == 'R')
                    y1--;
                if(path.back() == 'U')
                    x1++;
                if(path.back() == 'D')
                    x1--;

                if(x1 == xs && y1 == ys)
                    break;
            }
            return true;
        }

        for(int k = 0; k <= 3; k++) {
            int new_x = x1 + dx[k];
            int new_y = y1 + dy[k];

            if(inside(new_x, new_y) && !visited[new_x][new_y] && !map[new_x][new_y]) {
                if(k == 0) {
                    q.push(make_pair(new_x, new_y));
                    visited[new_x][new_y] = 1;
                    road[new_x][new_y] = 'U';
                }
                else if(k == 1) {
                    q.push(make_pair(new_x, new_y));
                    visited[new_x][new_y] = 1;
                    road[new_x][new_y] = 'D';
                }
                else if(k == 2) {
                    q.push(make_pair(new_x, new_y));
                    visited[new_x][new_y] = 1;
                    road[new_x][new_y] = 'L';
                }
                else {
                    q.push(make_pair(new_x, new_y));
                    visited[new_x][new_y] = 1;
                    road[new_x][new_y] = 'R';
                }
            }
        }
    }

    return false;
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
            else if(c == 'A') {
                xs = i;
                ys = j;
            }
            else if(c == 'B') {
                xf = i;
                yf = j;
            }
        }

    if(bfs(xs, ys)) {
        cout << "YES" << '\n' << path.size() << '\n';
        while(path.size()) {
            cout << path.back();
            path.pop_back();
        }
    }
    else
        cout << "NO";

    return 0;
}