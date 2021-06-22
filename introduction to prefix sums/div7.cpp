#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("div7.in");
    ofstream fout("div7.out");

    int n, temp, remainder, result = 0;
    fin >> n;
    int first[7];
    first[0] = 0;
    for (int i = 1; i < 7; i++) {
        first[i] = -1;
    }

    long long sum = 0;
    for (int i = 1; i <= n ; i++) {
        cout << i << '\n';
        fin >> temp;
        sum += temp;
        remainder = sum % 7;
        if (first[remainder] == -1) {
			first[remainder] = i;
        } else {
            result = max(result, i - first[remainder]);
        }
    }

    fout << result << '\n';
    return 0;
}