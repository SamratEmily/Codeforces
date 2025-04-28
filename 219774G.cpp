#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    bool flag = true;

    for(int i = 0; i < n/2; i++) {
        if(ar[i] != ar[n-i-1]) {
            flag = false;
            break;
        }
        }

    if(flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}