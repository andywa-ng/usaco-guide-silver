#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    char temp;
    int prefix[n+1][n+1] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> temp;
            prefix[i][j] = temp == '*';
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + (temp == '*');
        }
    }

    int x1, y1, x2, y2;
    for (int i = 0; i < q; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1] << '\n';
    }
    return 0;
}