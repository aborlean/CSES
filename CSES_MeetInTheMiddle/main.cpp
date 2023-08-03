#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> v(41);

vector<long long> sums(int left, int right ) {
    int size = right - left + 1;
    vector<long long> ans;

    for(int i = 0; i < (1 << size); i++) {
        long long sum = 0;
        for(int j = 0; j < size; j++) {
            if(i & (1 << j))
                sum += v[left + j];
        }
        ans.push_back(sum);
    }

    return ans;
}

int main(void)
{
    int n, sum;

    cin >> n >> sum;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long> left = sums(0, n / 2 - 1);
    sort(left.begin(), left.end());
    vector<long long> right = sums(n / 2, n - 1);
    sort(right.begin(), right.end());

    long long count = 0;

    for (long long i : left) {
		auto low_iterator = lower_bound(right.begin(), right.end(), sum - i);
		auto high_iterator = upper_bound(right.begin(), right.end(), sum - i);
		int start_index = low_iterator - right.begin();
		int end_index = high_iterator - right.begin();
		count += end_index - start_index;
	}

    cout << count;

    return 0;
}