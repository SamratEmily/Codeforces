#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool feasible(ll D, const vector<ll>& a, ll x, ll k) {
    if (D == 0) return true; // all positions allowed
    vector<pair<ll,ll>> segs;
    ll delta = D - 1; // forbidden radius around each friend is delta on each side
    for (ll ai : a) {
        ll L = max(0LL, ai - delta);
        ll R = min(x, ai + delta);
        if (L <= R) segs.emplace_back(L, R);
    }
    if (segs.empty()) return (x + 1) >= k;
    sort(segs.begin(), segs.end());
    // merge
    ll sumForbidden = 0;
    ll curL = segs[0].first, curR = segs[0].second;
    for (size_t i = 1; i < segs.size(); ++i) {
        if (segs[i].first <= curR + 1) {
            curR = max(curR, segs[i].second);
        } else {
            sumForbidden += (curR - curL + 1);
            curL = segs[i].first;
            curR = segs[i].second;
        }
    }
    sumForbidden += (curR - curL + 1);
    ll total = x + 1;
    ll allowed = total - sumForbidden;
    return allowed >= k;
}

vector<ll> build_positions(ll D, const vector<ll>& a, ll x, ll k) {
    vector<pair<ll,ll>> segs;
    if (D > 0) {
        ll delta = D - 1;
        for (ll ai : a) {
            ll L = max(0LL, ai - delta);
            ll R = min(x, ai + delta);
            if (L <= R) segs.emplace_back(L, R);
        }
    }
    sort(segs.begin(), segs.end());
    // merge forbidden intervals
    vector<pair<ll,ll>> merged;
    for (auto &s : segs) {
        if (merged.empty() || s.first > merged.back().second + 1) {
            merged.push_back(s);
        } else {
            merged.back().second = max(merged.back().second, s.second);
        }
    }
    vector<ll> res;
    auto push_range = [&](ll L, ll R) {
        for (ll p = L; p <= R && (ll)res.size() < k; ++p) res.push_back(p);
    };

    ll cur = 0;
    for (auto &m : merged) {
        ll L = m.first, R = m.second;
        if (cur <= L - 1) {
            push_range(cur, L - 1);
            if ((ll)res.size() == k) return res;
        }
        cur = R + 1;
        if (cur > x) break;
    }
    if ((ll)res.size() < k && cur <= x) push_range(cur, x);
    // if D==0 or no forbidden intervals and still not enough, fill from 0..x
    // but above already did that
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; ll k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());

        // Binary search maximum D (integer) such that feasible(D) is true.
        ll lo = 0, hi = x + 1; // hi is possible upper bound (exclusive)
        while (lo < hi) {
            ll mid = lo + (hi - lo + 1) / 2;
            if (feasible(mid, a, x, k)) lo = mid;
            else hi = mid - 1;
        }
        ll D = lo;
        vector<ll> ans = build_positions(D, a, x, k);

        // As a fallback (shouldn't be needed), if insufficient positions found, fill any unused positions
        if ((ll)ans.size() < k) {
            for (ll p = 0; p <= x && (ll)ans.size() < k; ++p) {
                // ensure distinct
                if (!binary_search(ans.begin(), ans.end(), p)) ans.push_back(p);
            }
        }

        for (size_t i = 0; i < ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
