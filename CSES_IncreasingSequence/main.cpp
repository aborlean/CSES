#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, x;

    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        cin >> x;
        int j = lower_bound(v.begin(), v.end(), x) - v.begin();
        if(j == v.size())
            v.push_back(x);
        else
            v[j] = x;
    }

    cout << v.size();

    return 0;
}