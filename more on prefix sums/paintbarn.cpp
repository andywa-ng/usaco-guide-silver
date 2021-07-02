#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("paintbarn.in");
    ofstream fout("paintbarn.out");

    int n, k;
    fin >> n >> k;

    int x1, y1, x2, y2, diff[1000][1000] = {};
    for (int i = 0; i < n; i++) {
        fin >> x1 >> y1 >> x2 >> y2;
        for (int j = y1; j < y2; j++) {
            diff[j][x1]++;
            diff[j][x2]--;
        }
    }

    int coats = 0, result = 0;
    for (int i = 999; i > -1; i--) {
        for (int j = 0; j < 1000; j++) {
            coats += diff[i][j];
            result += coats == k;
        }
    }
    
    fout << result << '\n';
    return 0;
}