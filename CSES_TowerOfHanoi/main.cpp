#include <iostream>
#include <cmath>

using namespace std;

void towerofhanoi(int n, int from, int to, int via)
{
    if(n <= 0)
        return;
    towerofhanoi(n - 1, from, via, to);
    cout << from << ' ' << to << '\n';
    towerofhanoi(n - 1, via, to, from);
}

int main(void)
{
    int n;

    cin  >> n;

    cout << pow(2, n) - 1 << '\n';

    towerofhanoi(n, 1, 3, 2);

    return 0;
}