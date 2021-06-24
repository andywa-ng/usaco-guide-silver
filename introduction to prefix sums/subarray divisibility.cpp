#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long remainders[n];
    remainders[0] = 1;
    for (int i = 1; i < n; i++) {
        remainders[i] = 0;
    }
    
    long long temp, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        remainders[(sum % n + n) % n]++;
    }

    long long result = 0;
    for (int i = 0; i < n; i++) {
        result += remainders[i] * (remainders[i]-1) / 2;
    }
 
    cout << result << '\n';
    return 0;
}