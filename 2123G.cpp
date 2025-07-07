#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Vin(v) for(auto &x : v) cin >> x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, q;
        cin >> n >> m >> q;
        vector<ll> a(n);
        Vin(a);

        while (q--) {
            int type;
            cin >> type;
            if (type == 1) {
                ll i, x;
                cin >> i >> x;
                i--;
                a[i] = x;
            } else {
                ll k;
                cin >> k;
                ll d = gcd(k, m);

                bool ok = true;
                for (ll i = 0; i < n - 1; i++) {
                    ll ai = a[i] % d;
                    ll aj = a[i + 1] % d;
                    if (ai > aj) {
                        ok = false;
                        break;
                    }
                }

                cout << (ok ? "YES\n" : "NO\n");
            }
        }
    }
}
