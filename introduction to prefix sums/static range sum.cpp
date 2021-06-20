#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, l, r;
    cin >> n >> q;

    long long temp, prefix[n+1];
    prefix[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> temp;
        prefix[i] = prefix[i-1] + temp;
    } 

    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << prefix[r] - prefix[l] << '\n';
    }

    return 0;
}