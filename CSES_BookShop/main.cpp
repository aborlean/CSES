#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, price = 0;

    cin >> n >> price;

    vector<int> books(n);
    vector<int> pages(n);

    for(int i = 0; i < n; i++)
        cin >> books[i];
    for(int i = 0; i < n; i++)
        cin >> pages[i];

    vector<vector<int>> maximum(n + 1, vector<int>(price + 1, 0));

    for(int i = 0; i < n; i++)
        for(int j = 0; j <= price; j++) {
            maximum[i + 1][j] = maximum[i][j];
            if(j >= books[i])
                maximum[i + 1][j] = max(maximum[i + 1][j], pages[i] + maximum[i][j - books[i]]);
        }

    cout << maximum[n][price];

    return 0;
}