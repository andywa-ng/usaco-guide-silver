#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[n];
	for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

	long long prefix[n] = {a[0]};
	for (int i = 1; i < n; i++) {
        prefix[i] = __gcd(prefix[i-1], a[i]);
    }   
    
    long long suffix[n];
    suffix[n-1] = a[n-1];
	for(int i = n-2; i > -1; i--) {
        suffix[i] = __gcd(suffix[i+1], a[i]);
    }

	long long result = max(prefix[n-2], suffix[1]);
	for (int i = 1; i < n-1; i++) {
		result = max(result, __gcd(prefix[i-1], suffix[i+1]));
	}

	cout << result << '\n';
    return 0;
}