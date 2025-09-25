#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
       long long int x, k;
       cin >> k >> x;

        long long int ans = x * (1 << k);
    
        cout << ans << endl;

    }

    return 0;
}