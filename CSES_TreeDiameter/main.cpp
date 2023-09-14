#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[200001];

pair<int, int> bfs(int node)
{
    queue<pair<int, int>> q;
    q.push({node, 0});
    vector<bool> visited(200001, false);
    pair<int, int> current;

    while(!q.empty()) {
        current = q.front();
        q.pop();
        visited[current.first] = true;
        for(int i : v[current.first]) {
            if(!visited[i])
                q.push({i, current.second + 1});
        }
    }

    return current;
}

int main(void)
{
    int n, x, y;

    cin >> n;

    for(int i = 1; i < n; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    pair<int, int> end1 = bfs(1);
    pair<int, int> end2 = bfs(end1.first);

    cout << end2.second;

    return 0;
}