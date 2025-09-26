#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll check(vector<int>& a, int k, int l, int r) {
    int n = a.size();
    map<int,int> freq;
    int left = 0;
    ll cnt = 0;

    for (int right = 0; right < n; ++right) {
        freq[a[right]]++;
        while ((int)freq.size() > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) freq.erase(a[left]);
            left++;
        }
        int len = right - left + 1;
        if (len >= l) {
            int max_len = min(len, r);
            cnt += max_len - l + 1;
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        ll ans = check(a, k, l, r) - check(a, k - 1, l, r);
        cout << ans << endl;
    }

    return 0;
}
