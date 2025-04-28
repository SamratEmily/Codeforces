#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long sum = 0 , x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    
    cout << abs(sum) << endl;
    return 0;
}