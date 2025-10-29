#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> idx_R0, idx_R1, idx_R2;
    for (int i = 0; i < n; ++i) {
        if (p[i] % 3 == 0) idx_R0.push_back(i);
        else if (p[i] % 3 == 1) idx_R1.push_back(i);
        else idx_R2.push_back(i);
    }

    vector<int> val_R0, val_R1, val_R2;
    for (int v = 1; v <= n; ++v) {
        if (v % 3 == 0) val_R0.push_back(v);
        else if (v % 3 == 1) val_R1.push_back(v);
        else val_R2.push_back(v);
    }

    vector<int> q(n);
    int k = 0;
    for (int i : idx_R0) {
        q[i] = val_R0[k++];
    }

    k = 0;
    for (int i : idx_R1) {
        q[i] = val_R2[k++];
    }

    k = 0;
    for (int i : idx_R2) {
        q[i] = val_R1[k++];
    }
    
    for (int i = 0; i < n; ++i) {
        cout << q[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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