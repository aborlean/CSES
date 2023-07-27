#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    string s;

    cin >> s;

    sort(s.begin(), s.end());

    vector<string> strings;

    do {
        strings.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    cout << strings.size() << '\n';

    for(auto i : strings)
        cout << i << '\n';

    return 0;
}