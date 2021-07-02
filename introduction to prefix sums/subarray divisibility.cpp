#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long temp, sum = 0, remainders[n] = {1}, result = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        remainders[(sum % n + n) % n]++;
        result += remainders[(sum % n + n) % n] - 1;
    }
 
    cout << result << '\n';
    return 0;
}