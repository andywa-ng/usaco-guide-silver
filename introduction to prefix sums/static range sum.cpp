#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long temp, prefix[n+1] = {};
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        prefix[i] = prefix[i-1] + temp;
    } 

    int l, r;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << prefix[r] - prefix[l] << '\n';
    }
    return 0;
}