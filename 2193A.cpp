#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;

        for(int i = 0 ; i < n; i++) {
            int a;
            cin >> a;
            s -= a;
        }

        if(s%x == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}