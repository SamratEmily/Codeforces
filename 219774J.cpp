#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sort(ar, ar+n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] == ar[0]) {
            cnt++;
        }
    }
    
    if(cnt%2 == 0) {
        cout << "Unlucky" << endl;
    }
    else {
        cout << "Lucky" << endl;
    }

    return 0;
    
}