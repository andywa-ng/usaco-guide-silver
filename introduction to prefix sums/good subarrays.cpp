#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        
        long long sum = 0, result = 0;
        map<long long, int> prefixes;
        prefixes[0] = 1;
        for (int i = 0; i < n; i++) {
            sum += a[i] - '0';
            prefixes[sum-i-1]++;
            result += prefixes[sum-i-1] - 1;
        }

        cout << result << '\n';
    }
    return 0;
}