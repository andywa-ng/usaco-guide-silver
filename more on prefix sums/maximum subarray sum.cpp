#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long temp, prefix[n+1] = {};
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		prefix[i] = prefix[i-1] + temp;
	}

	long long min_prefix = 0, result = prefix[1];
	for (int i = 1; i <= n; i++) {
		result = max(result, prefix[i] - min_prefix);
		min_prefix = min(min_prefix, prefix[i]);
	}

	cout << result << '\n';
    return 0;
}