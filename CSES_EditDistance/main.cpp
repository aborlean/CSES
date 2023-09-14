#include <iostream>

using namespace std;

int main(void)
{
    string s1, s2;

    cin >> s1 >> s2;

    int l1 = s1.size(), l2 = s2.size();
    int dp[l1 + 1][l2 + 1];

    for(int i = 0; i <= l1; i++)
        for(int j = 0; j <= l2; j++) {
            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if(s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
        }

    cout << dp[l1][l2];
    
    return 0;
}