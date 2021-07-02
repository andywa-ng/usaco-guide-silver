#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("div7.in");
    ofstream fout("div7.out");

    int n;
    fin >> n;

    int first[7] = {};
    for (int i = 1; i < 7; i++) {
        first[i] = -1;
    }

    int temp, sum = 0, result = 0;
    for (int i = 1; i <= n; i++) {
        fin >> temp;
        sum = (sum + temp) % 7;
        if (first[sum] == -1) {
			first[sum] = i;
        } else {
            result = max(result, i - first[sum]);
        }
    }

    fout << result << '\n';
    return 0;
}