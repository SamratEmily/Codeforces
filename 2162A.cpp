#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a, mx = 0;

        for (int i = 1; i <= n; ++i) {
            cin >> a;
            mx = max(mx, a);
        }
        cout << mx << endl;
    }
    return 0;
}