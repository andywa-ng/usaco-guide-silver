#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");

    int n, q;
    fin >> n >> q;

    int h[n+1] = {}, g[n+1] = {}, j[n+1] = {}, temp;
    for (int i = 1; i <= n; i++) {
        h[i] = h[i-1];
        g[i] = g[i-1];
        j[i] = j[i-1];
        fin >> temp;
        if (temp == 1) {
            h[i]++;
        } else if (temp == 2) {
            g[i]++;
        } else {
            j[i]++;
        } 
    } 

    int a, b;
    for (int i = 0; i < q; i++) {
        fin >> a >> b;
        fout << h[b] - h[a-1] << ' ' << g[b] - g[a-1] << ' ' << j[b] - j[a-1] << '\n';
    }
    return 0;
}