#include <iostream>
#include <string>

using namespace std;

int v[27];

int main(void)
{
    char c;
    string s;
    int a, n, nimp = 0;

    getline(cin, s);

    n = s.length();

    for(int i = 0; i < n; i++) {
        a = s[i] - 'A';
        v[a]++;
    }

    for(int i = 0; i < 26; i++)
        if(v[i] % 2 == 1)
            nimp++;

    if(nimp > 1)
        cout << "NO SOLUTION";
    else {
        for(int i = 0; i < 26; i++)
            if(v[i] % 2 == 0) {
                c = i + 'A';
                for(int j = 1; j <= v[i] / 2; j++)
                    cout << c;
            }
        for(int i = 0; i < 26; i++)
            if(v[i] % 2 == 1) {
                c = i + 'A';
                for(int j = 1; j <= v[i]; j++)
                    cout << c;
            }
        for(int i = 25; i >= 0; i--)
            if(v[i] % 2 == 0) {
                c = i + 'A';
                for(int j = 1; j <= v[i] / 2; j++)
                    cout << c;
            }
    }
    return 0;
}