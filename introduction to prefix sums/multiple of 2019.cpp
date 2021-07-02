#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int n = s.size(), remainder = 0, modifier = 1, remainders[2019] = {1};
    long long result = 0;
	for (int i = n-1; i > -1; i--) {
		remainder = (remainder + modifier * (s[i] - '0')) % 2019;
		remainders[remainder]++;
        result += remainders[remainder] - 1;
		modifier = modifier * 10 % 2019;
	}

	cout << result << endl;
	return 0;
}
