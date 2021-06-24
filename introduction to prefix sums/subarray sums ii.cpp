#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    long long temp, sum = 0, result = 0;
    map<long long, int> sums;
    sums[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        result += sums[sum-x];
        sums[sum]++;
    }
 
    cout << result << '\n';
    return 0;
}