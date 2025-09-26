#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

       int a;
        map<int, int> freq;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            freq[a]++;
        }

        for(int i = 0; i < k; i++) {
            if(freq[i] == 0 ) {
                ans++;
            }
        }

        ans = max(ans, freq[k]);

        cout << ans << endl;
    }

    return 0;
}