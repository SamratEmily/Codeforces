#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int ans = 1e9;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i+1; j < n; j++) {
                if (i == j) continue;
                sum = (a[i] + a[j] + j - i);
                ans = min(ans, sum);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}