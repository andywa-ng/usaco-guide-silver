#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");

    int n, k, b;
    fin >> n >> k >> b;

    int temp;
    bool broken[n] = {};
    for (int i = 0; i < b; i++) {
        fin >> temp;
        broken[temp-1] = true;
    }

    int prefix[n+1] = {};
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + broken[i-1];
    }

    int result = 1e5;
    for (int i = k; i <= n; i++) {
        result = min(result, prefix[i] - prefix[i-k]);
    }

    fout << result << '\n';
    return 0;
}