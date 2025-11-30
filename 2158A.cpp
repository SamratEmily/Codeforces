#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int y, r; 
    cin >> y >> r;
    y = y / 2;
    if(y + r > n) {
        cout << n << "\n";
    } else {
        cout << (y + r)<< "\n";
    }
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