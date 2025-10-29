#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    long long P = a * b;
    if (P % 2 != 0) {
        cout << P + 1 << "\n";
        return;
    }

    if (P % 4 != 0) {
        cout << -1 << "\n";
        return;
    }

    cout << P / 2 + 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}