#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int ans = 1e+9, pos;

    for(int i = 0; i < n; i++) {
        if(ar[i] < ans) {
            pos = i+1;
            ans = ar[i];
        }
    }

    cout << ans << " " << pos << endl;

    return 0;
}