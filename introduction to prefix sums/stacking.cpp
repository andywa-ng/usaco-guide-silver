#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a, b;
    int diff[n+1] = {};
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        diff[a-1]++;
        diff[b]--;
    }

    int sum = 0, stacks[n]; 
    for (int i = 0; i < n; i++) {
        sum += diff[i];
        stacks[i] = sum;
    }
    sort(stacks, stacks + n);

    cout << stacks[n/2] << '\n';
    return 0;
}