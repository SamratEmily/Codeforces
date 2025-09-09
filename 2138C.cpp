#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long S = 1LL << (k + 1);
        long long target = 1LL << k;

        long long c = x;
        long long v = S - x;
        vector<int> ans;

        while (c != target || v != target) {
            if (c > v) {
                c -= v;
                v = 2 * v;
                ans.push_back(2);
            } else {
                v -= c;
                c = 2 * c;
                ans.push_back(1);
            }
        }

        int n = (int)ans.size();
        cout << n << endl;
        if( n == 0) {
            cout << endl;
        }
        for (int i = n - 1; i >= 0; --i) {
            cout << ans[i] << (i ? ' ' : '\n');
        }
    }
    return 0;
}


