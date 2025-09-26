#include <bits/stdc++.h>
using namespace std;

long long cost_to_group(const vector<long long>& pos) {
    int m = pos.size();
    if (m <= 1) return 0;
    vector<long long> adj(m);
    for (int i = 0; i < m; ++i) adj[i] = pos[i] - i;
    int mid = m / 2;
    long long med = adj[mid];
    long long cost = 0;
    for (int i = 0; i < m; ++i) cost += llabs(adj[i] - med);
    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        vector<long long> posA, posB;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'a') posA.push_back(i);
            else posB.push_back(i);
        }
        long long ans = min(cost_to_group(posA), cost_to_group(posB));
        cout << ans << '\n';
    }
    return 0;
}
