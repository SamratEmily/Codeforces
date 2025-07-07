#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Vin(v) for(auto &it: v)cin>>it;

ll n, d;
vector<ll> p;

bool bin_search(ll x) {
    ll total = 0;
    for (ll i = 0; i < x; i++) {
        ll need = d / p[i] + 1;
        total += need;
        if (total > n) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> d;
    p.resize(n);
    Vin(p);

    sort(p.rbegin(), p.rend()); // descending order

    ll l = 0, r = n, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (bin_search(mid)) {
            ans = mid; // try to form more
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
